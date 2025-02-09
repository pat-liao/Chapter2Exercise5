/*Program File Name: Chapter2Exercise5
Programmer: Patrick Liao
Date: 1.26.2025
Requirements: To get the average of a series of values, you add the values up then divide the sum by the number of values.
    Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33.
    The program should first calculate the sum of these five variables and store the result in a separate variable named sum.
    Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double var1 = 28,
           var2 = 32,
           var3 = 37,
           var4 = 24,
           var5 = 33;                                                                                                                         //declare variables

    double sum = var1 + var2 + var3 + var4 + var5;                                                                                            //define sum
    double avg = sum / 5;                                                                                                                     //calculate avg

    cout << "The average of " << var1 << ", " << var2 << ", " << var3 << ", " << var4 << ", and " << var5 << " is " << avg << endl;           // display message

    return 0;

}

