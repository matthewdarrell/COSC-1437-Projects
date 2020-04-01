/*
    COSC-1437-58000: Programming Fundamentals II
    Unit 1 Assignment
    Matthew Bishop | matthew.bishop469@my.tccd.edu
    March 31, 2020
    IDE: VS Code
*/

#include <iostream>
#include "Physics_Functions.h"

using namespace std;

void showMenu();
void showMotionMenu();

int main()
{
  char input = '\0';

  while (tolower(input) != 'e')
  {
    showMenu();
    input = getValidChar();

    switch (tolower(input))
    {
      case 'a': calculateVelocity(); break;
      case 'b': calculateAcceleration(); break;
      case 'c': 
        showMotionMenu(); 
        input = getValidChar();
        switch (tolower(input))
        {
          case 'a': calculateVelocityTime(); break;
          case 'b': calculatePositionTime(); break;
          case 'c': calculateVelocityPosition(); break;
          case 'd': calculateAverageVelocity(); break;
          case 'e': cout << "Goodbye." << endl; break;
          case 'x': cout << "\x1b[0m" << "\033[2J\033[1;1H"; break;
        }
        break;
      case 'd': calculateForce(); break;
      case 'f': calculateWeight(); break;
      case 'g': calculateMomentum(); break;
      case 'e': cout << "Goodbye." << endl; break;
      case 'x': cout << "\x1b[0m" << "\033[2J\033[1;1H"; break;
      default: cout << "Invalid choice" << endl; break;
    }
  }
  return 0;
}

void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Calculate Velocity" <<endl; 
  cout << "B: Calculate Acceleration" << endl; 
  cout << "C: Motion Menu" << endl; 
  cout << "D: Calculate Force" << endl; 
  cout << "F: Calculate Weight" << endl; 
  cout << "G: Calculate Momentum" << endl; 
  cout << "E: Exit" << endl; 
  cout << "X: Clear the Screen" << endl;  
}

void showMotionMenu()
{
  cout << "\nMOTION MENU" << endl; 
  cout << "A: Calculate Velocity Time" <<endl; 
  cout << "B: Calculate Position Time" << endl; 
  cout << "C: Calculate Velocity Position" << endl; 
  cout << "D: Calculate Average Velocity" << endl; 
  cout << "E: Exit" << endl; 
  cout << "X: Clear the Screen" << endl;  
}