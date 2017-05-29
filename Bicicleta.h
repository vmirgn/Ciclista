#pragma once
#include "Resource.h"
#define CICLISTA_WIDTH 64
#define CICLISTA_HEIGHT 64

class Bicicleta
{
public:
	Bicicleta();
	~Bicicleta();
	int positionX;
	void Draw(CG::Gdi& gdi, int &height);
	Sys::Icon icon;
	HINSTANCE hInstance;
};

