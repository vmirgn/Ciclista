#include "stdafx.h"
#include "Carretera.h"


Carretera::Carretera()
{
}


Carretera::~Carretera()
{
}

void Carretera::Draw(CG::Gdi& gdi, int &width)
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
}