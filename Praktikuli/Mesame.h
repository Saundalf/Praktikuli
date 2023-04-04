#pragma once
class Mesame
{
public:
	Mesame(int a, int b, int c);
	~Mesame();
	float function();
	void print();
private:
	int* p_A = new int;
	int* p_B = new int;
	int* p_C = new int;
};