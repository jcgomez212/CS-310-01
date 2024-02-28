#include <iostream>
using namespace std;

// The instructions for this exercise
// are on eCampus in the .ppt named 
// "CS310 Lecture 05 Control Structure"
// all on the last slide. 

int main ()
{
    // Print the first 50 prim numbers in five lines, each line having 10 numbers, also making it aligned
    cout << "Here is a table of the first 50 prime numbers: " << endl;

    int count  = 0;
    int num = 2;
    while(count < 50)
    {
      bool isPrime = true;
      for(int possibleDivisor = 2; possibleDivisor < num; possibleDivisor++)
      {
        if (num % possibleDivisor ==0)
        {
          isPrime = false;
          break;
        }
      }
      if(isPrime)
      {
        cout << num << "\t";
        count++;
        if(count % 10 == 0)
        {
          cout << "\n" << endl;
        
        }
      }
      num++;    
    }

    return 0;
}

/*
Programming Exercise: Displaying Prime Numbers

Problem: Write a program that displays the first 50 prime numbers in
five lines, each of which contains 10 numbers. The numbers in each
column should align properly.

Definition: An integer greater than 1 is prime if its only positive
divisor is 1 or itself. For example, 2, 3, 5, and 7 are prime numbers,
but 4, 6, 8, and 9 are not.

Solution: The problem can be broken into the following tasks:

• Determine whether a given number is prime for number = 2, 3, 4, 5, 6, ..., .
• Count the number of prime numbers that we have had.
• Print each prime number (print 10 numbers per line).
*/