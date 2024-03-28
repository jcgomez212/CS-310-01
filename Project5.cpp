#include <iostream>
#include <string>
using namespace std;

// Function prototypes
int getIntegerInput(const string& prompt);
double getDoubleInput(const string& prompt);
void printMenu();
int selectMenu();
void inputData(double userWeight[], string exerciseType[], int exerciseTime[], int& count);
void printData(const string& userName, const string& userGender, const int& userAge,
               const double& userHeight, const double& userWeight, const string& exerciseType, const int& exerciseTime);
void printHistoryData(const string& userName, const string& userGender, const int& userAge,
                      const double& userHeight, const double userWeight[], const string exerciseType[], const int exerciseTime[], int count);

int main()
{
    // Declare variables for user information
    string userName, userGender, exerciseType;
    int userAge, exerciseTime, count = 0;
    double userHeight, userWeight[7];
    string exerciseTypeArray[7];
    int exerciseTimeArray[7];

    // Get basic user info
    cout << "Enter your name: ";
    getline(cin, userName);

    cout << "Enter your gender: ";
    getline(cin, userGender);

    userAge = getIntegerInput("Enter your age: ");
    userHeight = getDoubleInput("Enter your height (in meters): ");

    // Initialize flag to track if data has been added
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
                inputData(userWeight, exerciseTypeArray, exerciseTimeArray, count);
                dataAdded = true; // Set flag to true when data is added
                break;
            case 2:
                if (dataAdded)
                    printData(userName, userGender, userAge, userHeight, userWeight[(count - 1) % 7], exerciseTypeArray[(count - 1) % 7], exerciseTimeArray[(count - 1) % 7]);
                else
                    cout << "There is no fitness data to print.\n";
                break;
            case 3:
                printHistoryData(userName, userGender, userAge, userHeight, userWeight, exerciseTypeArray, exerciseTimeArray, count);
                break;
            case 4:
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
    cout << "3. Print History Data\n";
    cout << "4. Exit\n";
}

// Function to select a menu option
int selectMenu() {
    return getIntegerInput("Select an option: ");
}

// Function to add data for today's weight and exercise information
void inputData(double userWeight[], string exerciseType[], int exerciseTime[], int& count)
{
    cout << "\nEnter today's weight (in kilograms): ";
    userWeight[count % 7] = getDoubleInput("");

    cout << "Enter the exercise type for today: ";
    getline(cin, exerciseType[count % 7]);

    cout << "Enter the exercise time (in minutes): ";
    exerciseTime[count % 7] = getIntegerInput("");

    // Increment count to keep track of the number of inputs
    count++;
}

// Function to print user's latest data
void printData(const string& userName, const string& userGender, const int& userAge,
               const double& userHeight, const double& userWeight, const string& exerciseType, const int& exerciseTime)
{
    cout << "\nUser's latest data:\n";
    cout << userName << endl;
    cout << userGender << ", " << userAge << ", " << userHeight << " m" << endl;
    cout << "Weight: " << userWeight << " kg" << endl;
    cout << "Exercise: " << exerciseType << " (" << exerciseTime << " mins)" << endl;
}

// Function to print history of fitness data
void printHistoryData(const string& userName, const string& userGender, const int& userAge,
                      const double& userHeight, const double userWeight[], const string exerciseType[], const int exerciseTime[], int count)
{
    if (count == 0)
    {
        cout << "No fitness data to print.\n";
        return;
    }

    cout << "\nUser's fitness data history:\n";
    cout << userName << endl;
    cout << userGender << ", " << userAge << ", " << userHeight << " m" << endl;

    cout << "\nRecent 7 entries:\n";
    int start = (count >= 7) ? (count % 7) : 0;
    int end = (count < 7) ? count : 7;
    for (int i = start; i < start + end; ++i)
    {
        int index = i % 7;
        cout << "Entry " << i + 1 << ":\n";
        cout << "Weight: " << userWeight[index] << " kg\n";
        cout << "Exercise: " << exerciseType[index] << " (" << exerciseTime[index] << " mins)\n";
    }
}