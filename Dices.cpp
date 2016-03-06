#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice
{
public:
	Dice(); //constructor
	void Roll(int); //modifier
	
private:
	int num; //data member
};

Dice::Dice() :num(0)
{
}

void Dice::Roll(int number)
{
}

int main()
{
}