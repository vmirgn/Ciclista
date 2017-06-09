#pragma once
#include "Resource.h"

#define CICLISTA_WIDTH 64
#define CICLISTA_HEIGHT 64
class Jugador
{
public:
	Jugador();
	~Jugador();
	int positionX;
	void Draw(CG::Gdi& gdi, int &height);
	Sys::Icon icon;
	HINSTANCE hInstance;
};

