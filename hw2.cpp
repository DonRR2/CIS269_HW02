// hw2.cpp
//
// This file contains the main file for the assignment. Use this file to call the other files.
//
// Author: Greg Wagner
#include "dynArray.h"


// Main function
int main(int argc, char** argv)
{
	int arrayLength1 = 10;
	int arrayLength2 = 20;
	int arrayLength3 = 30;
	int randArray1[10];   // Initialized these 3 arrays to 0 to get rid of
	int randArray2[20];  // the compile error of unintialized local variable used error.
	int randArray3[30];  //  on lines 19,20,21 but I think I created a bigger problem.
	int i = 0;
	randomArray(randArray1,arrayLength1);
	randomArray(randArray2,arrayLength2);
	randomArray(randArray3,arrayLength3);

	for (i = 0; i < arrayLength1; i++)// Display static array randArray1.
	{
		cout << "Static array randArray1[" << i << "] = " << randArray1[i] << endl;
	}
	cout << "\n" << endl;

	for (i = 0; i < arrayLength2; i++)// Display static array randArray2.
	{
		cout << "Static array randArray2[" << i << "] = " << randArray2[i] << endl;
	}
	cout << "\n" << endl;


	for (i = 0; i < arrayLength3; i++)// Display static array randArray3.
	{
		cout << "Static array randArray3[" << i << "] = " << randArray3[i] << endl;
	}
	cout << "\n" << endl;

	return 0;
} 
