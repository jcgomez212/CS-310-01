// Juliana Gomez (s1321300)
// Thursday, January 18th, 2024
// CS 310-01 (Dr. Ling Zheng)
// In this project students were prompted to make a C++ file/application that keeps track of a user's health.
// The final output must print the user's name, gender, age, and height (in meters m ), weight (in kilograms kg ),
// as well as the exercise worked on for that day (in with time in mins) 

#include <iostream>  // this is like import from Java, 
#include <string>
using namespace std;


const string user = "Hedy";
const string gender = "F";
const int age = 21;
const double height = 1.6002;
const double weight = 81.6466;
const string exerciseType = "Push ups";
const int exerciseTime = 30;

int main () // every C++ program must have a main function
{
cout << user << endl;
cout << gender << ", " << age << ", " << height << " m" << endl;
cout << "Weight: " << weight << " kg " << endl;
cout << "Exercise: " << exerciseType << "(" << exerciseTime << " mins)";
return 0;
}