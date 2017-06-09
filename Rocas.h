#pragma once
#include "Resource.h"

class Rocas
{
public:
	Rocas();
	~Rocas();
	double positionX;
	double positionY;
	void Draw(CG::Gdi& gdi);
	Sys::Icon icon;
	HINSTANCE hInstance;
	RECT borderrock;
};

