// Juliana Gomez (s1321300)
// Tuesday, February 27th, 2024
// CS 310-01 (Dr. Ling Zheng)
// Project 4: Personal Fitness Application
/*
This program tracks a user's health, allowing users to input and print their health data, and exit the application.
    
    - Refactored the code of Project 3 using functions.
    - Implemented functions to get integer and double inputs, get basic user info, print the menu, and select menu options.
    - Implemented functions for adding and printing user data.
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
int getIntegerInput(const string& prompt);
double getDoubleInput(const string& prompt);
void printMenu();
int selectMenu();
void inputData(double& userWeight, string& exerciseType, int& exerciseTime);
void printData(const string& userName, const string& userGender, const int& userAge,
               const double& userHeight, const double& userWeight, const string& exerciseType, const int& exerciseTime);

int main()
{
    // Declare variables for user information
    string userName, userGender, exerciseType;
    int userAge, exerciseTime;
    double userHeight, userWeight;

    // Get basic user info
    cout << "Enter your name: ";
    getline(cin, userName);

    cout << "Enter your gender: ";
    getline(cin, userGender);

    userAge = getIntegerInput("Enter your age: ");
    userHeight = getDoubleInput("Enter your height (in meters): ");

    // Initialize a flag to check if data has been added
    bool dataAdded = false;

    // Main loop for the program
    while (true)
    {
        printMenu(); // Print menu options
        int choice = selectMenu(); // Get user's choice

        // Process user choice
        switch (choice)
        {
            case 1:
                inputData(userWeight, exerciseType, exerciseTime);
                dataAdded = true;
                break;
            case 2:
                if (dataAdded)
                    printData(userName, userGender, userAge, userHeight, userWeight, exerciseType, exerciseTime);
                else
                    cout << "There is no fitness data to print.\n";
                break;
            case 3:
                cout << "Exiting the application.\n" << endl;
                return 0; // Exit the program
            default:
                cout << "The selected option is invalid.\n";
        }
    }

    return 0;
}

// Function to get integer input from user
int getIntegerInput(const string& prompt) {
    int input;
    while (true) {
        cout << prompt;
        cin >> input;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a numeric value.\n";
            cin.clear();
            cin.ignore(100, '\n');
        } else {
            cin.ignore();
            return input;
        }
    }
}

// Function to get double input from user
double getDoubleInput(const string& prompt) {
    double input;
    while (true) {
        cout << prompt;
        cin >> input;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a numeric value.\n";
            cin.clear();
            cin.ignore(100, '\n');
        } else {
            cin.ignore();
            return input;
        }
    }
}

// Function to print the menu options
void printMenu() {
    cout << "\nMenu:\n";
    cout << "1. Add Data\n";
    cout << "2. Print Data\n";
    cout << "3. Exit\n";
}

// Function to select a menu option
int selectMenu() {
    return getIntegerInput("Select an option: ");
}

// Function to add data for today's weight and exercise information
void inputData(double& userWeight, string& exerciseType, int& exerciseTime)
{
    cout << "\nEnter today's weight (in kilograms): ";
    cin >> userWeight;

    cin.ignore(); // Clear the newline character left in the buffer

    cout << "Enter the exercise type for today: ";
    getline(cin, exerciseType);

    cout << "Enter the exercise time (in minutes): ";
    cin >> exerciseTime;

    cin.ignore(); // Clear the newline character left in the buffer
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