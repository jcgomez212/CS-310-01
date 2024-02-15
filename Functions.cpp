#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void displayUserInfo(const string& name, int age);

int largest(int a, int b)
{
    int result;
    if(a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}

// overload largest function with two double parameters
double largest(double a, double b)
{
    double result;
    if(a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}

void formatRow(int degrees, string align = "right", int precisions = 2, int width = 8)
{
    double radians = 3.14159 * degrees / 180;
    double sines = sin(radians);
    double cosines = cos(radians);
    double tangent = tan(radians);
    if(align == "left")
    {
        cout << left;
    }
    else if(align == "right")
    {
        cout << right;
    }
    cout << fixed << setprecision(precisions);
    cout << setw(width) << degrees << setw(width) << radians << setw(width) << sines
    << setw(width) << cosines << setw(width) << tangent << endl;
}

int getIntInput()
{
    int input;
    cout << "Enter an integer: ";
    cin >> input;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "That isn't a valid integer! Try again: ";
        cin >> input;

    }
    return input;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main()
{

    displayUserInfo("Juliana Gomez", 21);

    cout << "calling the double version of largest: "
        << largest(3.4, 4.5) << endl;
    cout << "Give the correct values to avoid ambiguous invocation: " << largest(3,4) << endl;
    // call formatRow with one argument assigned to degree

    cout << endl;
    formatRow(30);
    formatRow(30, "left", 4, 9); // provided values are given to the parameters with default values
    formatRow(30, "right", 2, 10);
    formatRow(60, "right", 2, 10);
    cout << endl;

    int num1 = getIntInput();
    int num2 = getIntInput();
    int result = largest(num1, num2);
    cout << "The largest number between " << num1 << " and " << num2 << " is: " << result << endl;
    
    cout << endl;
    cout << "Trying to swap " << num1 << " and " <<num2 << ":\n";
    swap(num1, num2);
    cout << "After the swap call, num1 = " << num1 << " , and num2 = " << num2 << endl;

    int& refVar = num1;
    cout << endl;
    cout << "Demo for reference variables:\n";
    cout << "refVar and num1 are alias, the same thing.\n";
    cout << "refVar = " << refVar << " , num1 = " << num1 << endl;
    num1 += 10;
    cout << "Both variables are changed. refVar = " << refVar << " , num1 = " << num1 << endl;

    refVar = refVar - 10;
    cout << "Reduce by 10 on both variables. refVar = " << refVar << " , num1 = " << num1 << endl;
    return 0;
}

void displayUserInfo(const string& name, int age)
{
    cout << name << " , " << age << endl;
    // name = "Erik"; // const variable is not able to be changed.

}
