#include <iostream>
using namespace std;

const int COLUMN_SIZE = 3;

void initialMatrix(int myMatrix[][COLUMN_SIZE], int rowSize)
{
    for (int r = 0; r < rowSize; ++r)
    {
        for (int c = 0; c < COLUMN_SIZE; ++c)
        {
            cout << "Enter an int: ";
            cin >> myMatrix[r][c];
        }
    }
}

void sumOfColumn(const int myMatrix[][COLUMN_SIZE], int rowSize, int sums[])
{
    for (int c = 0; c < COLUMN_SIZE; ++c)
    {
        int sum = 0;
        for (int r = 0; r < rowSize; ++r)
        {
            sum += myMatrix[r][c];
        }
        sums[c] = sum;
    }
}

int largestValue(const int myArray[], int arraySize)
{
    int maxVal = myArray[0];
    for (int i = 1; i < arraySize; ++i)
    {
        if (myArray[i] > maxVal)
        {
            maxVal = myArray[i];
        }
    }
    return maxVal;
}

int searchValue(const int myArray[], int arraySize, int value, int indexes[])
{
    int count = 0;
    for (int i = 0; i < arraySize; ++i)
    {
        if (myArray[i] == value)
        {
            indexes[count++] = i;
        }
    }
    return count;
}

void printMatrix(const int myMatrix[][COLUMN_SIZE], int rowSize)
{
    for (int r = 0; r < rowSize; ++r)
    {
        for (int c = 0; c < COLUMN_SIZE; ++c)
        {
            cout << "     " << myMatrix[r][c] << "     ";
        }
        cout << endl;
    }
}

void printArray(const int myArray[], int arraySize)
{
    for (int i = 0; i < arraySize; ++i)
    {
        cout << "     " << myArray[i] << "     ";
    }
    cout << endl;
}

int main()
{
    const int rows = 2;
    int matrix[rows][COLUMN_SIZE];

    initialMatrix(matrix, rows);
    cout << "The matrix is:\n";
    printMatrix(matrix, rows);

    int sums[COLUMN_SIZE];
    sumOfColumn(matrix, rows, sums);
    cout << "The column sums:\n";
    printArray(sums, COLUMN_SIZE);

    int largestSum = largestValue(sums, COLUMN_SIZE);
    cout << "The largest column sum: " << largestSum << endl;

    int indexes[COLUMN_SIZE];
    int count = searchValue(sums, COLUMN_SIZE, largestSum, indexes);
    cout << count << " column(s) having the largest sum, column index(es):" << endl;
    printArray(indexes, count);

    return 0;
}