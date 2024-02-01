#include <iostream>
using namespace std;
int main ()
{
    /*
    int num1, num2;
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    bool condition = (num1 == num2);
    cout << "Are your two inputs the same? " 
        << boolalpha << condition << endl;

    // condition = (num1 = num2);
    cout << "Effect, making two numbers the same, If non zero condition is true: "
        << condition << " " << "num1 changed to num2, " 
        << num1 << " " << num2 << endl;

    condition = (num1 > num2);
    cout << "num1 > num2: " << condition << endl;
    condition = (num1 >= num2);
    cout << "num1 >= num2: " << condition << endl;
    condition = (num1 < num2);
    cout << "num1 < num2: " << condition << endl;

    condition = (999 > num1 && num1 > 100);
    cout << "Is num1 in the range of 100 to 999: " << condition << endl;

    condition = (num1 > num2 ) && (--num1);
    cout << "If num1 > num2, then num1 is decremented by 1; Otherwise, num1 is not updated! "
        << condition << " " << num1 << " " << num2 << endl;

    condition = num1 < 0 || num1 > 100;
    cout << "Is num1 < 0 or num2 > 100: " << condition << endl;
    condition = (num1 < 0) || (num1++);
    cout << "If num1 < 0, then it's not incremented by 1. Otherwise, num1 is updated. "
        << condition << " " << num1 << " " << num2 << endl;
    */
    int grade;
    cout << "Enter a numeric grade: ";
    cin >> grade;
    if (grade > 100 || grade < 0)
    {
        cout << "The grade input should be in the range of 0 to 100... \n";
    }
    else
    {
        char letter;
        if (grade >= 90)
        {
            letter = 'A';
        }
        else if (grade >= 80)
        {
            letter = 'B';
        }
        else if (grade >= 70)
        {
            letter = 'C';
        }
        else if (grade >= 60)
        {
            letter = 'D';
        }
        else
        {
            letter = 'F';
        }
        cout << "Your letter grade is: " << letter << endl;
        switch (letter)
        {
        case 'A':
            // cout << "Your GPA is 4.0 ;)\n";
            // break;
        case 'B':
            // cout << "Your GPA is 3.0 :)\n";
            // break;
        case 'C':
            // cout << "Your GPA is 2.0 :/\n";
            // break;
        case 'D':
            // cout << "Your GPA is 1.0 :0\n";
            cout << "Your grade is at least D, passing the course :) ";
            break;
        case 'F':
            cout << "Your GPA is 0.0 :(\n";
            break;
        }
    }
    return 0;
}