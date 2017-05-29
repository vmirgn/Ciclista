#include "stdafx.h"  //________________________________________ Ciclista.cpp
#include "Ciclista.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Ciclista app;
	app.CreateMainWindow(L"Ciclista", cmdShow, IDI_Ciclista, NULL, (HBRUSH)::GetStockObject(NULL_BRUSH), hInstance);
	return app.MessageLoop(IDC_Ciclista);
}

void Ciclista::Window_Open(Win::Event& e)
{
	x = 0;
	bitmap.CreateFromResource(this->hInstance, IDB_ESCENARIO);
}

bool Ciclista::RenderScene(CG::Gdi& gdi)
{
	//CG::Gdi gdi(hWnd, true, false);
	static DWORD prevTime = timeGetTime();
	const DWORD currentTime = timeGetTime();
	const float delta = (currentTime - prevTime) / 1000.0f;
	//______________ Update the game
	if (keyboard[VK_RIGHT])
	{
		x += 100.0*delta; // 100 pixels/second
	}
	if (keyboard[VK_LEFT])
	{
		x -= 100.0*delta;  // 100 pixels/second
	}
	// if (keyboard['A'])
	//{
	//	::PlaySound(MAKEINTRESOURCE(IDR_MYSOUND), hInstance, SND_RESOURCE | SND_ASYNC);
	// }
	if (x<0.0) x = width;
	if (x>width) x = 0.0;

	//____________________________________________ Paint Window Background
	/*CG::Brush brush(RGB(100, 100, 255));
	RECT rect = {0, 0, width, height};
	gdi.FillRect(rect, brush);
	gdi.DrawBitmap(bitmap, 0, 0);*/

	//____________________________________________ Main Background
	//CG::Brush brushMainBkgnd(RGB(0, 0, 0));
	//RECT rectMainBkgnd = { 0,0,width,height };
	//gdi.FillRect(rectMainBkgnd, brushMainBkgnd);
	//____________________________________________ Paint Game Background
	CG::Brush brushBackground(RGB(0, 255, 0));
	RECT rectBackground = { 0, 0, width, height };
	gdi.FillRect(rectBackground, brushBackground);
	//____________________________________________ Paint Highway Background
	CG::Brush brushHighway(RGB(150, 150, 150));
	RECT rectHighway = { 110, 0, width - 100, height };
	gdi.FillRect(rectHighway, brushHighway);

	//____________________________________________ Paint Small Circle
	gdi.Circle((int)x, 20, 10);

	prevTime = timeGetTime();
	return true; // return false to stop
}

//void Ciclista::Window_Size(Win::Event& e)
//{
//	Game::Window::Window_Size(e);
//	// Use this->width and this->height
//}

//void Ciclista::Window_KeyDown(Win::Event& e)
//{
//	switch (e.wParam)
//	{
//	case VK_SHIFT:
//		break;
//	case VK_UP:
//		break;
//	case 'A':
//		break;
//	}
//}

//void Ciclista::Window_KeyUp(Win::Event& e)
//{
//	switch (e.wParam)
//	{
//	case VK_SHIFT:
//		break;
//	case VK_UP:
//		break;
//	case 'A':
//		break;
//	}
//}

//void Ciclista::Window_LButtonDown(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//	this->SetFocus();
//}

//void Ciclista::Window_LButtonUp(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//}

//void Ciclista::Window_MouseMove(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//}

