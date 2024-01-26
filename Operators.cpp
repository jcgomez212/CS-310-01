#include <iostream>
using namespace std;

int main()
{
    int operand1;
    cout << (operand1 = 20) << endl;

    int operand2 = 3;

    cout << "Sum of 20 and 3: " << operand1 + operand2 << endl;
    cout << "Diff: " << operand1 - operand2 << endl;
    cout << "Product: " << operand1 * operand2 << endl;
    cout << "Integer Division: " << operand1 / operand2 << endl;

    double doubleVal = operand1;
    cout << "Real division: " << doubleVal / operand2 << endl;
    cout << "Real division again: " << (double)operand1 / operand2 << endl;
    cout << "operand1 is not changed: " << operand1 << endl;
    cout << "Modulus, remainder of integer division: " << operand1 % operand2 << endl;

    // completed Exercise 1 on different folder refer back to that for long operations

    operand1++; // operand1 = operand1 +1;
    operand2--; // operand2 = operand2 - 1;
    cout << "operand1 expected 21, operand2 expected as 2: " << operand1 << ", " << operand2 << endl;

    ++operand1;
    --operand2;
    cout << "operand1 = 22, operand 2 = 1: " << operand1 << ", " << operand2 << endl;

    int preIncrement = (++operand1) * 2; // adds 1 THEN completes expression
    cout << "Expected preIncrement as 2 * 23, operand1 as 23: " << preIncrement << ", " << operand1 << endl;

    int postIncrement = (operand1++) * 2; // completes expression THEN adds 1
    cout << "Expected postIncrement as 23 * 2, operand1 as 24: " << postIncrement << ", " << operand1 << endl;

    operand2 += 2 * 4; // operand2 = operand2 + (2 * 4);
    cout << "Expected operand2 as 1 + 8: " << operand2 << endl;

    int negativeValue = -10;
    int absoluteValue = negativeValue < 0 ? -1 * negativeValue : negativeValue; // if negative value is less
                                                            // than 0 then multiply by -1 to make positive then use " : " to reassign
                                                            // " : " means else
    cout << "Absolute value of -10: " << absoluteValue << endl;

    cout << "Input an integer: ";
    cin >> negativeValue;
    cout << "You inputted: " << negativeValue << endl;
    
    return 0;
}