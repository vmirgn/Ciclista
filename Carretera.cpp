#include "stdafx.h"
#include "Carretera.h"


Carretera::Carretera()
{
}


Carretera::~Carretera()
{
}

void Carretera::Draw(CG::Gdi& gdi, int &width, int &height)
{
	CG::Brush brush(RGB(255, 200, 0));
	RECT rect;
	rect.left = width / 2;
	rect.right = rect.left + LINE_WIDTH;
	rect.top = positionY;
	rect.bottom = positionY + LINE_HEIGHT;
	gdi.Select(brush);
	gdi.SelectNullPen();
	gdi.Rectangle(rect);


	//Sleep(10);
	icon.Load(hInstance, IDI_PLANTA);
	gdi.DrawIcon(20, positionY, icon);
	gdi.DrawIcon(20, positionY - 200, icon);
	gdi.DrawIcon(20, positionY - 360, icon);
	gdi.DrawIcon(20, positionY - 520, icon);
	gdi.DrawIcon(20, positionY - 680, icon);

	gdi.DrawIcon(width - 48, positionY, icon);
	gdi.DrawIcon(width - 48, positionY - 200, icon);
	gdi.DrawIcon(width - 48, positionY - 360, icon);
	gdi.DrawIcon(width - 48, positionY - 520, icon);
	gdi.DrawIcon(width - 48, positionY - 680, icon);
}