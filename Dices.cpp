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
	number = rand() % 6 + 1; // For random number generation between 1 and 6
}

int main()
{
	srand(time(NULL)); // For random number generation
}