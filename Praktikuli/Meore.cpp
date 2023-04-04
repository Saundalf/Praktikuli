#include <iostream>
#include "Meore.h"

Meore::Meore()
{
	srand(time(0));
	for (int i = 0; i < 15; i++)
	{
		p_Array[i] = 1 + rand() % 10;
	}
}

Meore::~Meore()
{
	delete[] p_Array;
}

int Meore::function()
{
	int mult = 1;
	for (int i = 0; i < 15; i++)
	{
		if (p_Array[i] % 2 != 0)
			continue;
		mult *= p_Array[i];
	}
	return mult;
}

void Meore::print()
{
	for (int i = 0; i < 15; i++)
		std::cout << *(p_Array + i) << " ";

	std::cout << std::endl;
}