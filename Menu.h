#pragma once   //_____________________________________________ Menu.h  
#include "resource.h"
#include "Instrucciones.h"

class Menu : public Win::Dialog
{
public:
	Menu()
	{
	}
	~Menu()
	{
	}
public:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Image imgMenu;
	Win::Button btJugar;
	Win::Button btInstrucciones;
	Win::Button btSalir;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(8.00100);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(13.16567);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		imgMenu.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 0.06350, 0.04233, 7.78933, 10.16000, hWnd, 1000);
		btJugar.CreateX(NULL, L"Jugar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.09550, 10.47750, 3.68300, 0.63500, hWnd, 1001);
		btInstrucciones.CreateX(NULL, L"Instrucciones", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.09550, 11.43000, 3.68300, 0.63500, hWnd, 1002);
		btSalir.CreateX(NULL, L"Salir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.09550, 12.38250, 3.68300, 0.63500, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btJugar.Font = fontArial009A;
		btInstrucciones.Font = fontArial009A;
		btSalir.Font = fontArial009A;
	}
	//_________________________________________________
	void btJugar_Click(Win::Event& e);
	void btInstrucciones_Click(Win::Event& e);
	void btSalir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btJugar.IsEvent(e, BN_CLICKED)) { btJugar_Click(e); return true; }
		if (btInstrucciones.IsEvent(e, BN_CLICKED)) { btInstrucciones_Click(e); return true; }
		if (btSalir.IsEvent(e, BN_CLICKED)) { btSalir_Click(e); return true; }
		return false;
	}
};
