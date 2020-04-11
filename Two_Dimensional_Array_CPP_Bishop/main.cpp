/*
    COSC-1437-58000: Programming Fundamentals II
    Unit 3 Assignment
    Matthew Bishop | matthew.bishop469@my.tccd.edu
    April 10, 2020
    IDE: VS Code
*/
#include "Input_Validators.h"
#include <iostream>

using namespace std;
/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Denver, CO = 1, Austin, TX = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: 71
City 1, Day 2: 33
City 1, Day 3: 32
City 1, Day 4: 45
City 1, Day 5: 54
City 1, Day 6: 42
City 1, Day 7: 53
City 2, Day 1: 79
City 2, Day 2: 84
City 2, Day 3: 65
City 2, Day 4: 67
City 2, Day 5: 65
City 2, Day 6: 76
City 2, Day 7: 76
*/

int main()

{

  const int CITY = 2;

  const int WEEK = 7;

  int temperature[CITY][WEEK];

  //Note your input data from the above

  cout << "Enter all temperature for a week of first city and then second city. \n";

  // Inserting the values into the temperature array

  //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

  for (int i = 0; i < CITY; ++i)

  {
    for (int j = 0; j < WEEK; ++j)
    {

      cout << "City " << i + 1 << ", Day " << j + 1 << ": ";

      temperature[i][j] = getValidInt();
    }
  }

  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array

  for (int i = 0; i < CITY; ++i)

  {
    for (int j = 0; j < WEEK; ++j)
    {
      cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
    }
  }
  return 0;
}