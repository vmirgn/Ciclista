#include "stdafx.h"  //_____________________________________________ Menu.cpp
#include "Menu.h"

void Menu::Window_Open(Win::Event& e)
{
	//________________________________________________________ imgMenu
	imgMenu.FileName = L"C:\\Users\\vmirg\\Desktop\\Proycto final\\Ciclista\\Ciclista\\menu.bmp";
	//	imgMenu.SetIcon(hInstance, IDI_JOHN);
	//	imgMenu.SetBitmap(hInstance, IDB_MARY);
}



void Menu::btJugar_Click(Win::Event& e)
{
	this->EndDialog(TRUE);
}

void Menu::btInstrucciones_Click(Win::Event& e)
{
	Instrucciones dlg;
	if (dlg.BeginDialog(hWnd) == TRUE)
	{
		this->Text = L"Instrucciones";
	}
	else
	{
		this->Destroy();
	}
}

void Menu::btSalir_Click(Win::Event& e)
{
	this->EndDialog(FALSE);
}

