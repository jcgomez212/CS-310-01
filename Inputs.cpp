#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 2, b = 2, c = 2;
    cout << a << " " << b << " " << c << endl; 

    double value = 2.9;
    a = (int) value;
    cout << "Only get the integer part and stored in a, a = " << a << endl;

    a = static_cast <int> (value);
    cout << "Same effect as previous cast, a = " << a << endl;


    string userName;
    cout << "What is your name? ";
    getline (cin, userName); // "cin >> userName;" will only read first word
    cout << "User name is: " << userName << endl;


    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Extraction unsuccessful :( " << cin.fail() << endl;
    while(cin.fail())
    {
        cin.clear(); // to change from unaccepted input to accepted input for the following ops
        cin.ignore(1000,'\n'); // extract and disregard 1000 characters or till an enter key
        cout << "Enter an int value for age: ";
        cin >> age;
    }
    cout << "The valid age: " << age << endl;

    cout << "What is your mood today? " << endl;
    string mood;
    cin.ignore(); // in default, extract and disregard one character
    getline(cin, mood);
    cout << "You are feeling " << mood << " today " << endl;

    /*cout << "You are " << age << " years old!" << endl;
    cout << "Give another input: " << endl;
    cin >> age;
    cout << "Second input: " << age << endl;
    */

    return 0;
}