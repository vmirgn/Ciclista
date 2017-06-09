#include "stdafx.h"  //_____________________________________________ Instrucciones.cpp
#include "Instrucciones.h"

void Instrucciones::Window_Open(Win::Event& e)
{
	//________________________________________________________ imgInstruccion
	imgInstruccion.FileName = L"C:\\Users\\vmirg\\Desktop\\Proycto final\\Ciclista\\Ciclista\\rideBike.bmp";
	//	imgInstruccion.SetIcon(hInstance, IDI_JOHN);
	//	imgInstruccion.SetBitmap(hInstance, IDB_MARY);
}



void Instrucciones::btMenu_Click(Win::Event& e)
{
	this->EndDialog(TRUE);
}

void Instrucciones::btSalir_Click(Win::Event& e)
{
	this->EndDialog(FALSE);
}

