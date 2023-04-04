#include <iostream>
#include <cmath>
#include "Mesame.h"

Mesame::Mesame(int a, int b, int c) : p_A(&a), p_B(&b), p_C(&c) 
{
}

Mesame::~Mesame()
{
	delete p_A, p_B, p_C;
}

float Mesame::function()
{
	float s = (*p_A + *p_B + *p_C) / 2.0;
	return sqrt(s * (s - *p_A) * (s - *p_B) * (s - *p_C));
}