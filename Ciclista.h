#pragma once  //______________________________________ Ciclista.h  
#include "Resource.h"
#include "Bicicleta.h"
#include "Carretera.h"
//#include "Principal.h"
#include "Baches.h"
#include "Rocas.h"
#include "Menu.h"
#include "Estado.h"
#define SPACE 2.5

class Ciclista : public Game::Window
{
public:
	Ciclista()
	{
		vidas = 10;
		puntos = 0;
		nivel = 1;
	}
	~Ciclista()
	{
	}
	int puntos;
	int nivel;
	int vidas;
	Bicicleta bicicleta;
	Carretera lineas[1];
	int positionX[10];
	int positionY[10];
	CG::DDBitmap bitmap;
	double x;
	Estado estado;
	bool RenderScene(CG::Gdi& gdi);
	Rocas roca;
	Baches bache;
	//bool RenderScene(CG::Gdi& gdi);
	const wchar_t * GetClassName() { return L"Ciclista"; }
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
protected:
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.cx = Sys::Convert::CentimetersToScreenPixels(8.84767);
		createStruct.cy = Sys::Convert::CentimetersToScreenPixels(17.92817);
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Ciclista";
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
