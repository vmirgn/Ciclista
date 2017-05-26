#pragma once  //______________________________________ Ciclista.h  
#include "Resource.h"
class Ciclista: public Game::Window
{
public:
	Ciclista()
	{
	}
	~Ciclista()
	{
	}
	double x;
	bool RenderScene(CG::Gdi& gdi);
	const wchar_t * GetClassName(){return L"Ciclista";}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"Ciclista";
	}
	//void Window_KeyDown(Win::Event& e);
	//void Window_KeyUp(Win::Event& e);
	//void Window_LButtonDown(Win::Event& e);
	//void Window_LButtonUp(Win::Event& e);
	//void Window_MouseMove(Win::Event& e);
	//void Window_Size(Win::Event& e);
	void Window_Open(Win::Event& e);
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
