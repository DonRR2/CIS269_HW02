# CIS269_HW02HW 2: Due February 5 at 11:59 PM
For this assignment you will be developing a program that uses dynamic arrays to create a data structure. The objectives for this assignment is to practice linking header files to C++ files, develop a greater understanding of how pointers work, and learn to use dynamic arrays.
Below are skeletons for the program. 
// dynArray.h
//
// HW2 header file for the assignment
//
// Greg Wagner
#ifndef DYNARRAY_H
#define DYNARRAY_H
#include <iostream>
// prototypes
void randomArray(int *, int); // prototype for randomArray that creates a random dynamic array 
#endif //DYNARRAY_H

// hw2.cpp
//
// This file contains the main file for the assignment. Use this file to call the other files.
//
// Author: Greg Wagner
#include “dynArray.h”
// Main function
Int main(int argc, char** argv){
	Int arrayLength1 = 10;
	Int arrayLength2 = 20;
	Int arrayLength3 = 30;
	int *randArray1;
	int *randArray2;
	int *randArray3;

	randomArray(randArray1,arrayLength1);
	randomArray(randArray2,arrayLength2);
	randomArray(randArray3,arrayLength3);
} 


// dynArray.cpp
//
// Fill out this file for the assignment
//
// Finish the description
//
// Your Name
50 points 
Get the code to compile by linking the files hw2 and dynArray.cpp with dynArray.h. Do this by creating an empty randomArray function.
25 points

Create a dynamic array in the dynArray.cpp that is created in randomArray function. The function should create an array of the length of second parameter and pass the resulting array to the first parameter.
25 points
Create random digits to load into the array that range from 0 to the length of the array. 
Make sure to include you readme file explaining what you did and any help you got.
EC 15 pt
Check to make sure there are no duplicates in the array.
