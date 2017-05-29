#include "Jugador.h"
#include "stdafx.h"

Jugador::Jugador()
{
	positionX = 0;
}


Jugador::~Jugador()
{
}

void Jugador::Draw(CG::Gdi& gdi, int &height)
{
	icon.Load(hInstance, IDI_ICON1);
	gdi.DrawIcon(positionX, height - CICLISTA_HEIGHT, icon);
}