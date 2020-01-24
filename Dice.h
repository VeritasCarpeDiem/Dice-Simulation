#pragma once
#include <Windows.h>

enum class Colors //strongly typed class of enum colors 
{

	//Explanation: The 2 hexadecimal values Foreground_Intensity(0x0008) and Foreground_blue(0x0001) are added(the "|" or operator) and
	//				produces Blue(0x0009). The value 9 is then assigned to Blue in a enum class 

	//(copied from microsoft website)
	BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
	GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
	CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
	RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
	MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
	YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
	WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
};

class Dice
{
private:
	
	int sideUpValue;
	int diceValues[100];
	int rollCounter;
	int histogramValue[6];
	

public:
	Dice();//default contructor
	~Dice();//destructor

	void Roll();
	void setSideUpValue(int value); //setter function
	int getSideUp(); //getter function
	void storeDiceValuesInArr();
	void displayHistogram(); 
	void changeTextColor(int color);
	void changeTextColor(Colors color);
};

