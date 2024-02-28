#include <iostream>
using namespace std;

const int STUDENTS = 3;
const int GAMES = 4;

void getInputs(int matrix[][GAMES], int students)
{
    for(int r = 0; r < students; r++)
    {
        cout << "Inputs for student " << (r + 1) << "\n";
        for (int c = 0; c < GAMES; c++)
        {
            cout << "Input an integer to represent"
                << " participating in the game: ";
            cin >> matrix[r][c];
        }
    }
}

void printMatrix(int matrix[][GAMES], int students)
{
    for(int rIndex = 0; rIndex < students; rIndex++)
    {
        for(int cIndex = 0; cIndex < GAMES; cIndex++)
        {
            cout << matrix[rIndex][cIndex] << '\t';
        }
        cout << endl;
    }
}
int main ()
{
    int matrix[STUDENTS][GAMES] = { {1, 1, 1, 1}, {2, 2, 0, 0} };
    cout << "element at row index 1, column index 1: "
        << matrix[1][1] << endl;
    cout << "first element's address: " << matrix << endl;
    cout << "second row's first element address: " << matrix[1]
        << endl;
    printMatrix(matrix, STUDENTS);
    getInputs(matrix, STUDENTS);
    cout << "Filled with users inputs: \n";
    printMatrix(matrix, STUDENTS);
    cout << "Compute the sum of the 1st column: \n";
    int total = 0;
    for(int rowIndex = 0; rowIndex < STUDENTS; rowIndex++)
    {
        total += matrix[rowIndex][0];
    }
    cout << "The 1st column sum is " << total << endl;
    return 0;
}