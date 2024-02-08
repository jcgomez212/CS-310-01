// Juliana Gomez (s1321300)
// Thursday, February 1st, 2024
// CS 310-01 (Dr. Ling Zheng)
// Project 2: Personal Fitness Application
// This program tracks a user's health, taking inputs for name, gender, age, height, weight, exercise type, and exercise time.

#include <iostream>
#include <string>
#include <sstream> // for stringstream
using namespace std;

int main()
{
    // Declare variables for user information
    string userName, userGender, exerciseType;
    int userAge, exerciseTime;
    double userHeight, userWeight;

    // Get user inputs
    cout << "Enter your name: ";
    getline(cin, userName); // Allowing multiple words for the name

    cout << "Enter your gender: ";
    getline(cin, userGender);

    // Input validation for age
    while (true)
    {
        cout << "Enter your age: ";
        cin >> userAge;

        if (cin.fail()) // Check if the input is not an integer
        {
            cout << "Invalid input. Please enter a numeric value for age." << endl;
            cin.clear();         // Clear the error flag
            cin.ignore(100, '\n'); // Discard invalid input
        }
        else
        {
            cin.ignore(); // Clear the newline character left in the buffer
            break;        // Break out of the loop if valid input
        }
    }

    // Input validation for height
    while (true)
    {
        cout << "Enter your height (in meters): ";
        cin >> userHeight;

        if (cin.fail()) // Check if the input is not a double
        {
            cout << "Invalid input. Please enter a numeric value for height." << endl;
            cin.clear();         // Clear the error flag
            cin.ignore(100, '\n'); // Discard invalid input
        }
        else
        {
            cin.ignore(); // Clear the newline character left in the buffer
            break;        // Break out of the loop if valid input
        }
    }

    // Input validation for weight
    while (true)
    {
        cout << "Enter your weight (in kilograms): ";
        cin >> userWeight;

        if (cin.fail()) // Check if the input is not a double
        {
            cout << "Invalid input. Please enter a numeric value for weight." << endl;
            cin.clear();         // Clear the error flag
            cin.ignore(100, '\n'); // Discard invalid input
        }
        else
        {
            cin.ignore(); // Clear the newline character left in the buffer
            break;        // Break out of the loop if valid input
        }
    }

    // Get exercise type
    cout << "Enter the exercise type for today: ";
    getline(cin, exerciseType);

    // Input validation for exercise time
    while (true)
    {
        cout << "Enter the exercise time (in minutes): ";
        cin >> exerciseTime;

        if (cin.fail()) // Check if the input is not an integer
        {
            cout << "Invalid input. Please enter a numeric value for exercise time." << endl;
            cin.clear();         // Clear the error flag
            cin.ignore(100, '\n'); // Discard invalid input
        }
        else
        {
            cin.ignore(); // Clear the newline character left in the buffer
            break;        // Break out of the loop if valid input
        }
    }

    // Display user information
    cout << endl; // Add a newline for better formatting
    cout << userName << endl;
    cout << userGender << ", " << userAge << ", " << userHeight << " m" << endl;
    cout << "Weight: " << userWeight << " kg " << endl;
    cout << "Exercise: " << exerciseType << "(" << exerciseTime << " mins)" << endl;

    return 0;
}
