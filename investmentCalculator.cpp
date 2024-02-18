// Juliana Gomez (s1321300)
// Tuesday, February 13th, 2024
// CS 310-01 (Dr. Ling Zheng)
// [Lab]Function Exercise: Investment Calculator
/*
    This C++ program implements an investment calculator that helps users determine the number of years required to achieve a specific investment goal based on their current balance and the annual interest rate. The program consists of two functions:
    
    1. numberOfYears: 
       - Takes three parameters: current account balance, annual interest rate, and investment goal.
       - Calculates and returns the number of years required to reach the investment goal using the compound interest formula.
    
    2. numberOfYearsAndUpdateBalance:
       - Modified version of numberOfYears.
       - Takes a reference to the current account balance as a parameter.
       - Calculates the number of years to reach the investment goal and updates the account balance accordingly using compound interest.
    
    In the main function:
    - Users are prompted to input their current balance, annual interest rate, and investment goal.
    - The numberOfYears function is called to calculate the number of years required to reach the investment goal, and the result is printed.
    - The current balance is printed to demonstrate that it remains unchanged after calling the function.
    - The numberOfYearsAndUpdateBalance function is called to calculate the number of years with the balance updated, and the updated balance is printed after the function call.

*/

#include <iostream>
#include <cmath> // for pow function
using namespace std;

// Function to calculate the number of years to reach the investment goal
int numberOfYears(double accountBalance, double interestRate, double investmentGoal) {
    // Calculate the number of years using the formula for compound interest
    int years = ceil((log(investmentGoal / accountBalance)) / (log(1 + interestRate / 100)));
    return years;
}

// Modified function to update the account balance after the specified number of years
int numberOfYearsAndUpdateBalance(double& accountBalance, double interestRate, double investmentGoal) {
    // Calculate the number of years using the formula for compound interest
    int years = ceil((log(investmentGoal / accountBalance)) / (log(1 + interestRate / 100)));
    
    // Update the account balance using compound interest formula
    accountBalance *= pow(1 + interestRate / 100, years);
    
    return years;
}

int main() {
    // Declare variables
    double currentBalance, interestRate, investmentGoal;
    
    // Input current balance, interest rate, and investment goal
    cout << "Enter current balance: $";
    cin >> currentBalance;
    
    cout << "Enter annual interest rate (%): ";
    cin >> interestRate;
    
    cout << "Enter investment goal: $";
    cin >> investmentGoal;
    
    // Call the numberOfYears function and print the result
    int years = numberOfYears(currentBalance, interestRate, investmentGoal);
    cout << "Number of years to reach investment goal: " << years << endl;
    
    // Print the current balance after the function call
    cout << "Current balance after function call: $" << currentBalance << endl;
    
    // Call the modified function to update the balance and print the result
    int updatedYears = numberOfYearsAndUpdateBalance(currentBalance, interestRate, investmentGoal);
    cout << "Number of years to reach investment goal (with balance update): " << updatedYears << endl;
    
    // Print the updated balance after the modified function call
    cout << "Updated balance after function call: $" << currentBalance << endl;
    
    return 0;
}