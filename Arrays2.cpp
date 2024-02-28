#include <iostream>
using namespace std;

void printArray(double array[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << array[index] << '\t';
	}
	cout << endl;
}

void passArgByValue(double array[], int value)
{
	array[0] = array[0] + 10;
	value += 10;
	cout << "Address of the local array: " << array << endl;
}

void getWeights(double weights[], int days)
{
	for (int day = 0; day < days; day++)
	{
		cout << "What is your weight for day " << day + 1 << " ? ";
		cin >> weights[day];
	}
}

double largestValueInArray(const double array[], int size)
{
	double result = array[0];
	for (int index = 1; index < size; index++)
	{
		if (result < array[index])
		{
			result = array[index];
		}
	}
	return result;
}

void reverse(const double original[], double reversed[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		reversed[j] = original[i];
	}
}

void reverse(double array[], int size)
{
	for (int i = 0, j = size - 1; i < size / 2; i++, j--)
	{
		double temp = array[j];
		array[j] = array[i];
		array[i] = temp;
	}
}

void shiftArrayToLeft(double array[], int size)
{
	for (int index = 0; index < size - 1; index++)
	{
		array[index] = array[index + 1];
	}
}


int main()
{

	double weights[] = {1,2,3,4,5,6,7};
	int sizeOfWeights = sizeof(weights) / sizeof(weights[0]);
	cout << "There are " << sizeOfWeights << "elements in weights array.\n";

	//cout << "uninitialized arrays: " << weights[0] << endl;
	cout << "Memory address of the first element: " << weights << endl;
	weights[0] = 1;
	weights[1] = 2;
	weights[2] = 3;
	weights[3] = 4;
	weights[4] = 5;
	weights[5] = 6;
	weights[6] = 7;

	const int size = 7;
	double copy[size] = { 10,20 };
	cout << "Third element: " << copy[2] << endl;
	cout << "First element: " << copy[0] << endl;

	//copy = weights; //array name is a constant, not able to be modified.

	char letters[size] = { 'A' };
	cout << "Second element in the letters array: " << letters[1] << endl;
	
	printArray(copy, size);

	cout << "Inside main function, the array address: " << copy << endl;
	passArgByValue(copy, size);
	cout << "Will the values be changed? ";
	printArray(copy, size);
	cout << "Will the size be changed? " << size << endl;

	getWeights(weights, size);
	printArray(weights, size);

	double largestElement = largestValueInArray(weights, size);
	cout << "Largest weight in a week: " << largestElement << endl;

	cout << "Test reverse function on weights array:\n";
	double reversedArray[size];
	reverse(weights, reversedArray, size);
	printArray(reversedArray, size);

	cout << "Reverse in place without a new array:\n";
	//reverse(weights, size);
	//printArray(weights, size);

	cout << "Enter your weight for day 8: ";
	shiftArrayToLeft(weights, size);
	cin >> weights[size - 1];
	printArray(weights, size);

	return 0;
}