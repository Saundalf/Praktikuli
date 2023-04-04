#include <iostream>
#include "Pirveli.h"
#include "Meore.h"
int main()
{
	/*Pirveli* ob = new Pirveli();
	float sum = ob->function();
	std::cout << "Elements in an array: ";
	ob->print();
	std::cout << sum;*/

	Meore* ob = new Meore();
	int mult = ob->function();
	ob->print();
	std::cout << mult;
	return 0;
}