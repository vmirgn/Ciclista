#include "stdafx.h"  //________________________________________ Ciclista.cpp
#include "Ciclista.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Ciclista app;
	app.CreateMainWindow(L"Ciclista", cmdShow, IDI_Ciclista, NULL, (HBRUSH)::GetStockObject(NULL_BRUSH), hInstance);
	return app.MessageLoop(IDC_Ciclista);
}

void Ciclista::Window_Open(Win::Event& e)
{
	Menu dlg;
	if (dlg.BeginDialog(hWnd) == TRUE)
	{
		this->Text = L"RideBike";
	}
	else
	{
		this->Destroy();
	}

	srand(::GetTickCount());
	for (int j = 0; j < 10; j++)
	{
		positionX[j] = (25 * (j)) + 90;
		positionY[j] = -1000 * j;
	}

	roca.positionX = positionX[rand() % 15];
	roca.positionY = positionX[rand() % 50];
	roca.hInstance = hInstance;
	bache.positionX = positionX[rand() % 15];
	bache.positionY = positionX[rand() % 150];
	bache.hInstance = hInstance;
	x = 0;
	//bitmap.CreateFromResource(this->hInstance, IDB_ESCENARIO);
	lineas[0].hInstance = hInstance;
	bicicleta.hInstance = hInstance;
	lineas[0].positionY = (int)(SPACE + (LINE_HEIGHT*SPACE));
	bicicleta.positionX = 150;
}

bool Ciclista::RenderScene(CG::Gdi& gdi)
{
	//CG::Gdi gdi(hWnd, true, false);
	static DWORD prevTime = timeGetTime();
	const DWORD currentTime = timeGetTime();
	const float delta = (currentTime - prevTime) / 1000.0f;
	//______________ Update the game
	lineas[0].positionY += 4;//(int)(800.0*delta);
	if (lineas[0].positionY > height)
	{
		lineas[0].positionY = 0;
	}
	if (keyboard[VK_RIGHT] == true)
	{
		bicicleta.positionX += (int)(400.0*delta + 0.5);
		if (bicicleta.positionX >= width - 110) bicicleta.positionX = width - 110;
		//if (bicicleta.positionX < width - 80) bicicleta.positionX = width - 100;
	}
	if (keyboard[VK_LEFT] == true)
	{
		bicicleta.positionX -= (int)(400.0*delta + 0.5);
		if (bicicleta.positionX <= 70) bicicleta.positionX = 70;
		//if ((bicicleta.positionX <= 80) && (bicicleta.positionX >= 80)) bicicleta.positionX = 80;
	}

	//____________________________________________ Paint Game Background
	CG::Brush brushBackground(RGB(0, 255, 0));
	RECT rectBackground = { 0, 0, width, height };
	gdi.FillRect(rectBackground, brushBackground);
	//____________________________________________ Paint Highway Background
	CG::Brush brushHighway(RGB(150, 150, 150));
	RECT rectHighway = { 80, 0, width - 80, height };
	gdi.FillRect(rectHighway, brushHighway);
	lineas[0].Draw(gdi, width, height);
	bicicleta.Draw(gdi, height, bache, roca);

	roca.Draw(gdi);
	//roca.positionY += (int)(4000.0*delta);
	roca.positionY += 4;
	if (roca.positionY > height)
	{
		roca.positionY = -100;
		roca.positionX = positionX[rand() % 10];
		puntos++;
	}

	bache.Draw(gdi);
	//roca.positionY += (int)(4000.0*delta);
	bache.positionY += 4;
	if (bache.positionY > height)
	{
		bache.positionY = -100;
		bache.positionX = positionX[rand() % 10];
		puntos++;
	}
	if ((bicicleta.chocado == true) || (bicicleta.salud < 0))
	{
		vidas--;
		bicicleta.chocado = false;
		bicicleta.salud = 1000;
		puntos = 0;
	}
	if (puntos>=15)
	{
		nivel++;
		puntos = 0;
	}
	estado.Draw(gdi, width, bicicleta.salud, vidas, puntos, nivel, hInstance);
	//____________________________________________ Paint Small Circle
	//Sleep(10);
	prevTime = timeGetTime();
	return true; // return false to stop
}
