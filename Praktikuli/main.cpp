#include <iostream>
#include "Pirveli.h"
#include "Meore.h"
#include "Mesame.h"
int main()
{
	/*Pirveli* ob = new Pirveli();
	float sum = ob->function();
	std::cout << "Elements in an array: ";
	ob->print();
	std::cout << sum;*/

	/*Meore* ob = new Meore();
	int mult = ob->function();
	ob->print();
	std::cout << mult;*/

	Mesame* ob = new Mesame(23, 41, 46);
	float area = ob->function();
	std::cout << area;

	return 0;
}