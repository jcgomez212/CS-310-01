#include <iostream>
using namespace std;

void printArray(double array[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << array[index] << '\t';
    }
    cout << endl;
}

void passArgByValue(double array[], int value)
{
    array[0] = array[0] + 10;
    value += 10;
    cout << "Addess of thw local array: " << array << endl;
}

void getWeights(double weights[], int days)
{
    for(int day = 0; day < days; day++)
    {
        cout << "What is your weight for day " << day + 1 << "? ";
        cin >> weights[day];
    }
}

int main()
{

    double weights[7] = {1, 2, 3, 4, 5, 6, 7};
    // cout << "Uninitialized arrays: " << weights[0] << endl;
    cout << "Memory address of the first element: " << weights << endl;
    weights[0] = 1;
    weights[1] = 2;
    weights[2] = 3;
    weights[3] = 4;
    weights[4] = 5;
    weights[5] = 6;
    weights[6] = 7;

    const int size = 7;
    double copy[size] = {10, 20};
    cout << "Third element: " << copy[2] << endl;
    cout << "First element: " << copy[0] << endl;

    char letters[size] = { 'A' };
    cout << "Second element in the letters array: " << letters[1] << endl;

    printArray(copy, size);

    cout << "Inside main function, the array address: " << copy << endl;
    passArgByValue(copy, size);
    cout << "Will the values be changed? ";
    printArray(copy, size);
    cout << "Will the size be changed?? " << size << endl;

    getWeights(weights, size);
    printArray(weights,size);
    return 0;
}