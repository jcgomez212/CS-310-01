#include <iostream>
using namespace std;

int main()
{
    // Prompt user for input
    cout << "Enter a number from 100 to 999: ";
    int userInt;
    cin >> userInt;

    // Display the original number
    cout << "The number you chose is: " << userInt << endl;

    // Extract individual digits
    int hundreds = userInt / 100;
    int tens = (userInt % 100) / 10;
    int ones = userInt % 10;

    // Display each digit separated by spaces
    cout << "Digits: " << hundreds << " " << tens << " " << ones << endl;

    // Calculate the sum of the digits
    int sum = hundreds + tens + ones;

    // Display the sum of the digits
    cout << "Sum of digits: " << sum << endl;

    // Check if the sum is divisible by 3 using the conditional operator
    cout << "Is the sum divisible by 3? " << ((sum % 3 == 0) ? "Yes" : "No") << endl;

    return 0;
}
