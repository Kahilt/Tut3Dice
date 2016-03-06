#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class Dice
{
public:
	Dice(); //constructor
	void Roll(); //modifier
	void Display(); //outputs results
	float average(Dice,int);
	int total;
	int noOfRolls;
private:
	int result; //data member
	
	
	
};

Dice::Dice() :result(0), noOfRolls(0), total(0)
{
	srand(time(NULL)); // For random number generation
}

void Dice::Roll()
{
	result = 0;
	noOfRolls++;
	result= (rand() % 6 + 1); // For random number generation between 1 and 6
	total += result;

}

void Dice::Display()
{
	cout << "The result of your dice roll is: " << result  << endl;
	cout << "Number of times rolled: "<< noOfRolls  << endl;
}


float average(Dice myDice, int rolls)
{
	return (myDice.total / rolls);
}


int main()
{
	string check;
	srand(time(NULL)); // For random number generation
	Dice dice1;
	dice1.Roll();
	dice1.Display();
	cout << "Enter stop to stop rolling dice or press enter to roll again" << endl;
	getline(cin, check);
	
	while (check.compare("stop")!=0)
	{
		dice1.Roll();
		dice1.Display();
		cout << "Enter stop to stop rolling dice or press enter to roll again" << endl;
		getline(cin, check);
	}
	float avg = average(dice1, dice1.noOfRolls);
		cout << "The avergae of your rolls is" << avg << endl;



}