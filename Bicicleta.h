#pragma once
#include "Resource.h"
#include "Carretera.h"
#include "Baches.h"
#include "Rocas.h"
#include "Estado.h"
#define CICLISTA_WIDTH 64
#define CICLISTA_HEIGHT 64

class Bicicleta
{
public:
	Bicicleta();
	~Bicicleta();
	int positionX;
	void Draw(CG::Gdi& gdi, int &height, Baches &bache, Rocas &roca);
	Sys::Icon icon;
	HINSTANCE hInstance;
	RECT borderbici;
	RECT intersection;
	int salud;
	bool chocado;
	bool alto;
};

