#pragma once   //_____________________________________________ Instrucciones.h  
#include "resource.h"

class Instrucciones : public Win::Dialog
{
public:
	Instrucciones()
	{
	}
	~Instrucciones()
	{
	}
public:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btMenu;
	Win::Button btSalir;
	Win::Image imgInstruccion;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(9.69433);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(13.14450);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btMenu.CreateX(NULL, L"Menu", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.36550, 12.36133, 2.77283, 0.63500, hWnd, 1000);
		btSalir.CreateX(NULL, L"Salir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.51933, 12.36133, 2.96333, 0.63500, hWnd, 1001);
		imgInstruccion.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 0.25400, 0.19050, 9.29217, 11.85333, hWnd, 1002);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btMenu.Font = fontArial009A;
		btSalir.Font = fontArial009A;
	}
	//_________________________________________________
	void btMenu_Click(Win::Event& e);
	void btSalir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btMenu.IsEvent(e, BN_CLICKED)) { btMenu_Click(e); return true; }
		if (btSalir.IsEvent(e, BN_CLICKED)) { btSalir_Click(e); return true; }
		return false;
	}
};
