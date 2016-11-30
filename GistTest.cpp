#include <iostream>
#include "GistTest.h"

using namespace std;
//Part One:
int sum()
{
	float a = 2.0f;
	int b = 5;
	float c = 7.4f;
	float d; //This will be used for the sum of a, b, and c, times 5.
	d = (a + b + c) * 5; //Adds 2, 5, 7 first, then multiplies the sum by 5.
	return d;
}


//Part Two:
int evenArray()
{
	int arr[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
	int a;
	for (a = 1; a < 18; a++)//Makes the a variable add by 1, until it is equal to 18.
	{
		a++;//Adds one again, to make all the numbers even.
		cout << arr[a] << endl;//Printing out each number in a loop.
	}
	return arr[a];//Displays the result.
}


//Part Three:
char reverse()
{
	char arr[8] = "Matthew"; //The character string.
	int i;
	for (i = 8; i > 0; --i) //Reverses the string using this.
	{
		cout << arr[i] << endl;//Printing out each character backwards in a loop.
	}
	return arr[i];//Displays the final result.
}


//PART FOUR IN THE HEADER


//Part Five:
int mostArray()
{
	int arra[15] = {1, 6, 2, 2, 6, 3, 7, 1, 9, 5, 2, 3, 9, 4, 5};
	int j = 0;
	for (j = 0; j < 15; j++)
	{
		arra[j];
	}
	return arra[3];
}


//Part Six:
void swapValue()
{
	int b = 4;
	int d = 2;
	int e = 0;
	e = b;
	b = d;
	d = e;
}


//Part Seven:
char sortAlphabetical()
{
	string arr[5] = { "Afternoon", "Ello", "G'day", "Hello", "Sup"};

}


int main()
{
	cout << sum() << endl;
	cout << endl;
	cout << evenArray() << endl;
	cout << endl;
	cout << reverse() << endl;
	cout << endl;
	void NameMe();
	cout << endl;
	cout << mostArray() << endl;
	cout << endl;
	void swapValue();
	cout << endl;
	cout << sortAlphabetical() << endl;
	system("pause");
	return 1;
}