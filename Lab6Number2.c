#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//stating size of the 2d array
#define Nrow 5
#define Ncolumn 5

 
int ArraySparse(int ArrayName[Nrow][Ncolumn], int row, int column);     //prototype function
int A, B;
int main(void)
{
	//initilizing the matrix
	int Array[5][5] = 
    {
		{1,1,1,1},			// Row 1
		{0,0,0,0},			// Row 2
		{0,0,0,0},       // Row 3
		{0,0,0,0},          // Row 4
        {1,1,0,0}          	// Row 5
        
        };		
	
	//5x5 matrix
	int row = 5;
	int column=5;
	
	//calling the function
	ArraySparse(Array, row, column);

	return 0;

}

//defining function 
int ArraySparse(int Array[Nrow][Ncolumn], int row, int column)
{
	int cntr = 0;

	//counting the numbers of zeros in the matrix
	for (A = 0; A < row; A++)
	{
		for (B = 0; B < column; B++)
		{
			if (Array[A][B] == 0)
			cntr++;
		}
	}

	//comparing the number of zeroes to non zero elements
	if (cntr > ((row * column) / 2))
	{
		printf("\nThe Array is sparse\n\n");
	}
	else 
	{
		printf("\nThe Array is not sparse\n\n");

	}

	return cntr;
}