#pragma once
#include "Resource.h"
#define LINE_WIDTH 20
#define LINE_HEIGHT 200

class Carretera
{
public:
	Carretera();
	~Carretera();
	int positionY;
	void Draw(CG::Gdi& gdi, int &width);
	HINSTANCE hInstance;
};

