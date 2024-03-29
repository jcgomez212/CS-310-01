// Juliana Gomez (s1321300)
// Tuesday, February 13th, 2024
// CS 310-01 (Dr. Ling Zheng)
// Project 3: Personal Fitness Application (Revised)
// This program tracks a user's health, taking inputs for name, gender, age, height, weight, exercise type, and exercise time.

#include <iostream>
#include <string>
#include <sstream> // for stringstream
using namespace std;

// Function prototypes
void addData(double& userWeight, string& exerciseType, int& exerciseTime);
void printData(const string& userName, const string& userGender, const int& userAge, const double& userHeight, const double& userWeight, const string& exerciseType, const int& exerciseTime);

int main()
{
    // Declare variables for user information
    string userName, userGender, exerciseType;
    int userAge, exerciseTime;
    double userHeight, userWeight;

    // Get user inputs for name, gender, age, and height
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

    // Continue after inputting height
    cout << "Thank you for providing your height.\n";

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

    // Initialize a flag to check if data has been added
    bool dataAdded = false;

    // Main loop for the program
    while (true)
    {
        // Display menu options
        cout << "\nMenu:\n";
        cout << "1. Add Data\n";
        cout << "2. Print Data\n";
        cout << "3. Exit\n";
        cout << "Select an option: ";

        int choice;
        cin >> choice;

        // Process user choice
        switch (choice)
        {
            case 1:
                addData(userWeight, exerciseType, exerciseTime);
                dataAdded = true;
                break;
            case 2:
                if (dataAdded)
                    printData(userName, userGender, userAge, userHeight, userWeight, exerciseType, exerciseTime);
                else
                    cout << "There is no fitness data to print.\n";
                break;
            case 3:
                cout << "Exiting the application.\n";
                return 0; // Exit the program
            default:
                cout << "The selected option is invalid.\n";
        }
    }

    return 0;
}

// Function to add data for today's weight and exercise information
void addData(double& userWeight, string& exerciseType, int& exerciseTime)
{
    cout << "\nEnter today's weight (in kilograms): ";
    cin >> userWeight;

    cin.ignore(); // Clear the newline character left in the buffer

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
}

// Function to print user's latest data
void printData(const string& userName, const string& userGender, const int& userAge,
const double& userHeight, const double& userWeight, const string& exerciseType, const int& exerciseTime)
{
    cout << "\nUser's latest data:\n";
    cout << "Name: " << userName << endl;
    cout << "Gender: " << userGender << endl;
    cout << "Age: " << userAge << endl;
    cout << "Height: " << userHeight << " m" << endl;
    cout << "Weight: " << userWeight << " kg" << endl;
    cout << "Exercise: " << exerciseType << " (" << exerciseTime << " mins)" << endl;
}
