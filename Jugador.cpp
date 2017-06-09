#include "stdafx.h"
#include "Jugador.h"


Jugador::Jugador()
{
	positionX = 0;
}


Jugador::~Jugador()
{
}

void Jugador::Draw(CG::Gdi& gdi, int &height)
{
	icon.Load(hInstance, IDI_BICICLETA);
	gdi.DrawIcon(positionX, height - CICLISTA_HEIGHT, icon);
}