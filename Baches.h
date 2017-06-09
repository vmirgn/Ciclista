#pragma once
#include "Resource.h"
class Baches
{
public:
	Baches();
	~Baches();
	double positionX;
	double positionY;
	void Draw(CG::Gdi& gdi);
	Sys::Icon icon;
	HINSTANCE hInstance;
	RECT borderbach;
};

