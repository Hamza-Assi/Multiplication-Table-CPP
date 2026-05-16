#include<iostream>

using namespace std;

void MultiplicationTable(int Array[10][10])			//Generate multiplication Table using 2D Array.
{

	//first loop for the rows
	for (int i = 0; i < 10; i++)
	{
		//second loop for the columns
		for (int j = 0; j < 10; j++)
		{
			// Array is base 0 ,add 1 to start Multiplication Form 1.
			Array[i][j] = (i + 1) * (j + 1);
		}
	}
}

void PrintArray(int Array[10][10])			//procedure to print the array.
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d ", 2, Array[i][j]);   // formating The output.
		}
		cout << endl;	// enter a line for each round of the array.
	}
}

int main()
{
	int Array[10][10];

	MultiplicationTable(Array); // calling the array with filled value

	cout << "---Multiplication Table 1 to 10 ----\n\n";

	PrintArray(Array);			//Print the array

	return 0;
}