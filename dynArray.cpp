// dynArray.cpp
//
// Fill out this file for the assignment
//
// Finish the description
//
// Gregory Wagner


#include "dynArray.h"

void randomArray(int *randArray, int length)
{
	int i = 0;
	int j = 0;
	int number = 0;
	bool duplicateFlag = true;

	int* dynRandArray = new int[length];

	srand(time(0)); // seed the random function with the clock.

	dynRandArray[0] = rand() % length;  // Seed the first element of the array with a random value
	                                    // so I have somthing to compare the next random value with.
		
	for(i = 1; i < length; i++) // Iterate through the rest of the array to populate it with random values.
	{
		duplicateFlag = true; // Set a flag to true for the while loop.
		while (duplicateFlag == true) // Just keep generating a random number until there is no match.
		{
			number = rand() % length; // Generate the next possible random number.
			for(j = 0; j < i; j++) // Iterate through the array to look for a duplicate.
			{

				if (number == dynRandArray[j])
				{
					duplicateFlag = true;
					//j = i; // If a duplicate is found short-circuit the j for loop.
					break;  // another way to short-circut the j for loop.
					
				}
				else
				{
					duplicateFlag = false; // set the flag to false if this iteration is not a duplicate.
				}
			} // end for j loop
		} // end while loop
		dynRandArray[i] = number;  // Set the last random number generated to the next empty array element. 
	} // end for i loop. Do the next array element.

	// display the array
	for(i = 0; i < length; i++)
	{
		cout << "Dynamic Array element[" << i << "] = " << dynRandArray[i] << endl;
		randArray[i] = dynRandArray[i]; // Load the static array with dynamic array values.
	}
	cout << "\n" << endl; // Put some space between the displayed arrays.
	delete [] dynRandArray; // Release the memory allocated to the dynamic array.
} // end dynArray()
