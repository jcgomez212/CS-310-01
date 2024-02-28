#include <iostream>
using namespace std;

int main ()
{
    int num = 0;
    /*cout << "Enter a positive integer: ";
    cin >> num;

    while (cin.fail() || num <= 0)
    {
        cout << "The input you gave is invalid! Try again: ";
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

        }
        cin >> num;
    }
    */

    bool firstInput = true;
    do
    {
        if(firstInput)
        {
        cout << "Enter a positive integer: ";
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "The input should be a positive integer! One more time: ";
        }
        cin >> num;
        firstInput = false;
    } while (cin.fail() || num <= 0);
    


    cout << "The valid positive integer: " << num << endl;

    bool isPrime = true;
    for(int possibleDivisor = 2; possibleDivisor < num; possibleDivisor++)
    {
        if (num % possibleDivisor == 0)
        {
            cout << num << " is not a prime!";
            isPrime = false;
            break;
            // cout << possibleDivisor << " is a divisor of " << num << endl;
        }
    }
    if (isPrime)
    {
        cout << num << " is a prime!\n";
    }
    return 0;

}