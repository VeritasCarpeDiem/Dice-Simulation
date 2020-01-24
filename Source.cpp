#include <iostream>
#include <string>
#include "Dice.h"

using namespace std;

//Write a program that demonstrates the Dice class.The program should create an instance of the class and display the side that is initially facing up.Then, use a loop to throw the dice 100  times.
//
//After which display a Column chart showing how much each number showed up.Something like this :
//
//	1 * ****************
//
//	2 * *********************************
//
//	3 * ****************
//
//	4 * **************************************************
//
//	5 * ****************
//
//	6 * *********************************

int main()
{
	Dice d;
	for (int i = 0; i < 100; i++) //roll dice 100 times, display their values
	{
		d.Roll();
		
		cout << "Roll # " << i + 1<< ": "<< d.getSideUp() << endl;
	}
	cout << endl;

	d.storeDiceValuesInArr();

	//display histogram
	d.displayHistogram();

	return 0;
}