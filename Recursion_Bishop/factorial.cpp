/*
    COSC-1437-58000: Programming Fundamentals II
    Unit 7 Assignment
    Matthew Bishop | matthew.bishop469@my.tccd.edu
    May, 3, 2020
    IDE: VS Code
*/

#include <iostream>
#include "Input_Validators.h"

using namespace std;

int factorialR(int);

int main()
{
  int input = getValidInt("Please enter a number: ")
  cout << "The factorial of your numer is " << factorialR(input) << "." << endl;
  return 0;
}

int factorialR(int num)
{
  if (num == 1)
    return num;
  else
    return num * factorialR(num - 1);
}