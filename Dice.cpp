#include "Dice.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>//for rand function

using namespace std;

Dice::Dice()//contructor
{
	//intialize variables
	rollCounter = 0;
	sideUpValue = 0; 
	for (int i = 0; i < 100; i++)
	{
		diceValues[i] = 0;
	}
	for (int i = 0; i < 6; i++)
	{
		histogramValue[i] = 0;
	}
	srand((unsigned int)time(NULL)); //set NULL to seed of srand function
}

Dice::~Dice()
{
	
}

void Dice::Roll()
{
	sideUpValue = 1+ rand() % 6; //generate a random number between 1-6
	diceValues[rollCounter] = sideUpValue;
	rollCounter++;
}

void Dice::setSideUpValue(int value)
{
	sideUpValue = value;
}

int Dice::getSideUp()
{
	return sideUpValue;
}

void Dice::storeDiceValuesInArr()
{
	for (int i = 0; i < 100; i++)//i is # of times dice is rolled
	{
		for (int j = 0; j <=5; j++ )//j is the 0-5- the index of histogramValue[]
		{
			if (diceValues[i] == j+1)
			{
				histogramValue[j]++;
			}
		}
	}
}

void Dice::displayHistogram()
{
	rollCounter = 0;
	for (int i = 0; i <= 5; i++)//loops through index of histogramValue[]
	{
		cout << i+1<<": ";
		for (int j = 0; j < histogramValue[i]; j++) //loop through the value STORED in each index of histogramArray[] 
		{
			changeTextColor(Colors::RED); //use scope resolution operator here b/c RED is a member of class Colors
			cout << char(219);
			changeTextColor(Colors::WHITE);
		}
		cout << endl;
	}
	
	
}

void Dice::changeTextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (int)color);
}

void Dice::changeTextColor(Colors color)//overloaded function
{
	changeTextColor((int)color);
}


