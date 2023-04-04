#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Pirveli.h"

Pirveli::Pirveli()
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		p_Array[i] = 1 + rand() % 50;
	}

}

Pirveli::~Pirveli()
{
	delete[] p_Array;
}

float Pirveli::function()
{
	float sum = .0f;
	for (int i = 0; i < 10; i++)
	{
		sum += p_Array[i];
	}
	return sum / 2;
}

void Pirveli::print()
{
	for (int i = 0; i < 10; i++)
		std::cout << p_Array[i] << " ";

	std::cout << std::endl;
}
