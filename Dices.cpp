#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice
{
public:
	Dice(); //constructor
	int  Roll(); //modifier
	void Display(); //outputs results
private:
	int num; //data member
};

Dice::Dice() :num(0)
{
	srand(time(NULL)); // For random number generation
}

int Dice::Roll()
{
	return (rand() % 6 + 1); // For random number generation between 1 and 6
}

void Dice::Display()
{
	num = Roll();
	cout << num << endl;
}
int main()
{
	srand(time(NULL)); // For random number generation
	Dice dice1;
	dice1.Display();
}