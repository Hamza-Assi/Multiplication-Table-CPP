#include<iostream>
using namespace std;


void ReadTableDimensions(int& Rows, int& Columns)	//Dynamic Dimension 
{
	cout << "Enter number of rows: ";			//user enter Number of Rows.
	cin >> Rows;

	cout << "Enter number of columns: ";		//user enter Number of Columns
	cin >> Columns;
}

void MultiplicationTable(int Array[100][100], int Rows, int Columns) //take the user input to do the Multiplication 
{
	for (int i = 0; i < Rows; i++)		//loop for Rows
	{
		for (int j = 0; j < Columns; j++)	//loop for columns
		{
			Array[i][j] = (i + 1) * (j + 1);
		}
	}
}

void PrintArray(int Array[100][100], int Rows, int Columns)		//print the table as the user enter 
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
		{
			printf("%0*d ", 2, Array[i][j]);			// optimize the output
		}
		cout << endl;
	}
}

int main()
{
	int Array[100][100];
	int Rows = 0, Columns = 0;

	ReadTableDimensions(Rows, Columns); //call the fun to read the dimension of the table 

	cout << "\n--- Multiplication Table 1 to " << Rows << " x " << Columns << " ---\n\n";

	MultiplicationTable(Array, Rows, Columns);	//fill the table
	PrintArray(Array, Rows, Columns);			// print the table

	return 0;
}