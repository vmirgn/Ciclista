#include "stdafx.h"
#include "Bicicleta.h"


Bicicleta::Bicicleta()
{
	positionX = 50;
	salud = 1000;
	chocado = false;
}


Bicicleta::~Bicicleta()
{
}

void Bicicleta::Draw(CG::Gdi& gdi, int &height, Baches &bache, Rocas &roca)
{
	icon.Load(hInstance, IDI_BICICLETA);
	gdi.DrawIcon(positionX, height - (CICLISTA_HEIGHT+64), icon);
	borderbici.left = positionX + 11;
	borderbici.right = positionX + 64;
	borderbici.top = height - 119;
	borderbici.bottom = height;
	
	if (::IntersectRect(&intersection, &borderbici, &roca.borderrock) == TRUE)
	{
		chocado = true;
		alto = true;
		return;
	}

	if (::IntersectRect(&intersection, &borderbici, &bache.borderbach) == TRUE)
	{
		salud--;
	}
}