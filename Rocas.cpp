#include "stdafx.h"
#include "Rocas.h"


Rocas::Rocas()
{
	positionX = 0.0;
	positionY = 0.0;
}


Rocas::~Rocas()
{
}

void Rocas::Draw(CG::Gdi& gdi)
{
	icon.Load(hInstance, IDI_ROCA);
	gdi.DrawIcon(positionX, positionY, icon);
	borderrock.left = positionX + 11;
	borderrock.right = positionX + 64;
	borderrock.top = positionY + 9;
	borderrock.bottom = positionY + 50;
}