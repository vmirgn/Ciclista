#pragma once  //______________________________________ Ciclista.h  
#include "Resource.h"
class Ciclista : public Game::Window
{
public:
	Ciclista()
	{
	}
	~Ciclista()
	{
	}
	CG::DDBitmap bitmap;
	double x;
	bool RenderScene(CG::Gdi& gdi);
	const wchar_t * GetClassName() { return L"Ciclista"; }
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
protected:
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.cx=Sys::Convert::CentimetersToScreenPixels(0.52917);
		createStruct.cy=Sys::Convert::CentimetersToScreenPixels(1.14300);
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
