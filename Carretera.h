#pragma once
#include "Resource.h"
#define LINE_WIDTH 10
#define LINE_HEIGHT 200

class Carretera
{
public:
	Carretera();
	~Carretera();
	int positionY;
	Sys::Icon icon;
	void Draw(CG::Gdi& gdi, int &width, int &height);
	HINSTANCE hInstance;
};

