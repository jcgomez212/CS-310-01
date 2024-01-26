// everyone's first program in C++ (one line comment)

#include <iostream>  // this is like import from Java, 
#include <string>
using namespace std; // std = standard, go into this namespace to look for elements
    
const double PI = 3.14;
                    //one semicolon means regular statement
int main () // every C++ program must have a main function
{
    cout << "Hello World! My name is Juli, I love to go ice skating and teaching younger kids how to code! \n"; // cout = standard output stream
    cout << 100;
    cout << endl;
    
    cout << "Someone likes pizza!" << endl << "He likes sports! \n";
    cout << "Juli likes pizza! \nShe also likes sports! \n101";
    cout << "Print double quotes \"\""<< endl;
    cout << "The file is saved in the path: C:\\User\\jgomez" << endl;

    char letter;
    // char can be any of the 26 letters, nums 0-9, and _
    cout << "Character is sorted using " << sizeof(char) << " bytes in memory!\n";
    letter = 'A';
    cout << "You got " << letter << endl;

    bool isEmpty = false; // false is 0 but true is 1
    cout << "value of isEmpty: " << isEmpty << endl;
    isEmpty = true;
    cout << "boolean values are stored using " << sizeof(isEmpty) << " bytes.\n";

    unsigned int numberOfPeople(2); // unsigned only represents positive values and zero
    // or you can say "integer = 2;"
    cout << "integer = " << numberOfPeople << endl;

    double pi = 3.14159;

    int int1, int2, int3;
    int1 = int2 = int3 = 4;

    string info;
    cout << "Right now it is empty: " << info << endl;
    info = "Matt, 20";
    cout << "content changed to: " << info << endl;

    string text = "Time for exercise!";

    return 0; // this is used to show that the program executes correctly
}