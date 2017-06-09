#include "stdafx.h"
#include "Estado.h"


Estado::Estado()
{
}


Estado::~Estado()
{
}


void Estado::Draw(CG::Gdi &gdi, int &width, int &Damage, int &lifes, int &puntos, int &level, HINSTANCE &hInstance)
{
	wstring text;
	CG::Font font;
	font.Create(L"Times New Roman", 20, false, false, false, false);
	gdi.Select(font);
	gdi.SetTextColor(RGB(0, 0, 0));
	//gdi.SetBkColor(RGB(0, 0, 0));
	Sys::Format(text, L"Nivel:\r\n %d", level);
	gdi.TextOut(0, 0, text);
	Sys::Format(text, L"Salud:\r\n %d", Damage);
	gdi.TextOut(100, 0, text);
	Sys::Format(text, L"Vidas:\r\n %d", lifes);
	gdi.TextOut(200, 0, text);
	Sys::Format(text, L"Puntos:\r\n %d", puntos);
	gdi.TextOut(300, 0, text);
}