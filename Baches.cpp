#include "stdafx.h"
#include "Baches.h"


Baches::Baches()
{
}


Baches::~Baches()
{
}

void Baches::Draw(CG::Gdi& gdi)
{
	icon.Load(hInstance, IDI_BACHE);
	gdi.DrawIcon(positionX, positionY, icon);
	borderbach.left = positionX + 11;
	borderbach.right = positionX + 64;
	borderbach.top = positionY + 9;
	borderbach.bottom = positionY + 50;
}