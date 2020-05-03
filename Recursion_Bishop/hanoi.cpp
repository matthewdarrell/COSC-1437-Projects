/*
    COSC-1437-58000: Programming Fundamentals II
    Unit 7 Assignment
    Matthew Bishop | matthew.bishop469@my.tccd.edu
    May, 3, 2020
    IDE: VS Code
*/

#include <iostream>

using namespace std;

void moveDiscs(int, int, int, int);

int main()
{
  moveDiscs(3, 1, 3, 2);
  return 0;
}

void moveDiscs(int num, int from, int to, int temp)
{
  if (num > 0)
  {
    moveDiscs(num-1, from, temp, to);
    cout << "Move a disc from peg " << from << " to peg " << to << endl;
    moveDiscs(num-1, temp, to, from);
  }
}