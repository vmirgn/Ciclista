#include "stdafx.h"
#include "Bicicleta.h"


Bicicleta::Bicicleta()
{
	positionX = 50;
}


Bicicleta::~Bicicleta()
{
}

void Bicicleta::Draw(CG::Gdi& gdi, int &height)
{
	icon.Load(hInstance, IDI_JUGADOR);
	gdi.DrawIcon(positionX, height-CICLISTA_HEIGHT, icon);
}