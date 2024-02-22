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
#include <sstream> // for stringstream
using namespace std;

// Function prototypes
int getIntegerInput(const string& prompt);
double getDoubleInput(const string& prompt);
void getBasicInfo(string& userName, string& userGender, int& userAge, double& userHeight);
void printMenu();
int selectMenu();
void inputData(string& userName, string& userGender, int& userAge, double& userHeight, double& userWeight, string& exerciseType, int& exerciseTime);
void printData(const string& userName, const string& userGender, const int& userAge, const double& userHeight, const double& userWeight, const string& exerciseType, const int& exerciseTime);

int main()
{
    // Declare variables for user information
    string userName, userGender, exerciseType;
    int userAge, exerciseTime;
    double userHeight, userWeight;

    // Get basic user info
    getBasicInfo(userName, userGender, userAge, userHeight);

    // Main loop for the program
    while (true)
    {
        printMenu(); // Print menu options
        int choice = selectMenu(); // Get user's choice

        // Process user choice
        switch (choice)
        {
            case 1:
                inputData(userName, userGender, userAge, userHeight, userWeight, exerciseType, exerciseTime);
                break;
            case 2:
                printData(userName, userGender, userAge, userHeight, userWeight, exerciseType, exerciseTime);
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

// Function to get basic user information
void getBasicInfo(string& userName, string& userGender, int& userAge, double& userHeight) {
    cout << "Enter your name: ";
    getline(cin, userName); // Allowing multiple words for the name

    cout << "Enter your gender: ";
    getline(cin, userGender);

    userAge = getIntegerInput("Enter your age: ");
    userHeight = getDoubleInput("Enter your height (in meters): ");
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
void inputData(string& userName, string& userGender, int& userAge, double& userHeight, double& userWeight, string& exerciseType, int& exerciseTime)
{
    userWeight = getDoubleInput("\nEnter today's weight (in kilograms): ");

    cout << "Enter the exercise type for today: ";
    getline(cin, exerciseType);

    exerciseTime = getIntegerInput("Enter the exercise time (in minutes): ");
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