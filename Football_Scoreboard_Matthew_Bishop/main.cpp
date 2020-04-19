/*
    COSC-1437-58000: Programming Fundamentals II
    Unit 4 Assignment
    Matthew Bishop | matthew.bishop469@my.tccd.edu
    April 18, 2020
    IDE: VS Code
*/

#include <iostream>
#include "Input_Validators.h"
#include "Scoreboard.h"

using namespace std;

void ShowScoreboard(Scoreboard *);

int main()
{
  char input = '\0';
  Team homeTeam = Team("Cougars", "Jerrald Figsburger", "Cincinatti", 1);
  Team awayTeam = Team("Bears", "Henry Feldspars", "Burleson", 0);

  Scoreboard scoreboard = Scoreboard(homeTeam, awayTeam);

  ShowScoreboard(&scoreboard);

  while (tolower(input) != 'e')
  {
    input = getValidChar("Please select a value to update (q for Quater, d for Down, y for YardsToGo, m for Minutes, s for seconds, h for HomeTeam, a for AwayTeam, e to exit): ");
    switch (tolower(input))
    {
      case 'q': 
        scoreboard.setQuater(getValidInt("Please enter a value for the quater (1-4): "));
        ShowScoreboard(&scoreboard);
        break;
      case 'd':         
        scoreboard.setDown(getValidInt("Please enter a value for the Down (1-4): "));
        ShowScoreboard(&scoreboard);
        break;
      case 'y':
        scoreboard.setYardsToGo(getValidInt("Please enter a value for the yards to go (0-100): "));
        ShowScoreboard(&scoreboard);
        break;
      case 'm':
        scoreboard.setTimerMinutes(getValidInt("Please enter a value for the timer minutes (0-60): "));
        ShowScoreboard(&scoreboard);
        break;
      case 's': 
        scoreboard.setTimerSeconds(getValidInt("Please enter a value for the time seconds (0-60)): "));
        ShowScoreboard(&scoreboard);
        break;
      case 'h': 
        input = getValidChar("Please select a value to update (n for name, c for coach name, l for city name, a for home status, s for score, t for timeout count): ");
        switch (tolower(input))
        {
          case 'n': 
            scoreboard.HomeTeam.setName(getValidString("Please enter a value for the name: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'c': 
            scoreboard.HomeTeam.setCoachName(getValidString("Please enter a value for the coach name: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'l': 
            scoreboard.HomeTeam.setHomeCity(getValidString("Please enter a value for the city: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'a': 
            scoreboard.HomeTeam.setHomeStatus(getValidBool("Please enter a value for the home status: "));
            ShowScoreboard(&scoreboard);
            break;
          case 's': 
            scoreboard.HomeTeam.setScore(getValidInt("Please enter a value for the score: "));
            ShowScoreboard(&scoreboard);
            break;
          case 't': 
            scoreboard.HomeTeam.setTimeoutCount(getValidInt("Please enter a value for the timeout count: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'e': 
            cout << "Final Scoreboard: " << endl; 
            break;
          default: 
            cout << "Invalid input"; 
            break;
        }
        break;
      case 'a':
        input = getValidChar("Please select a value to update (n for name, c for coach name, l for city name, a for home status, s for score, t for timeout count): ");
        switch (tolower(input))
        {
          case 'n': 
            scoreboard.AwayTeam.setName(getValidString("Please enter a value for the name: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'c': 
            scoreboard.AwayTeam.setCoachName(getValidString("Please enter a value for the coach name: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'l': 
            scoreboard.AwayTeam.setHomeCity(getValidString("Please enter a value for the city: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'a': 
            scoreboard.AwayTeam.setHomeStatus(getValidBool("Please enter a value for the home status: "));
            ShowScoreboard(&scoreboard);
            break;
          case 's': 
            scoreboard.AwayTeam.setScore(getValidInt("Please enter a value for the score: "));
            ShowScoreboard(&scoreboard);
            break;
          case 't': 
            scoreboard.AwayTeam.setTimeoutCount(getValidInt("Please enter a value for the timeout count: "));
            ShowScoreboard(&scoreboard);
            break;
          case 'e': 
            cout << "Final Scoreboard: " << endl; 
            break;
          default: 
            cout << "Invalid input"; 
            break;
        }
        break;
      case 'e': 
        cout << "Final Scoreboard: " << endl; 
        break;
      default: 
        cout << "Invalid input" << endl;
        break;
    }
  }

  return 0;
}

void ShowScoreboard(Scoreboard *scoreboard)
{
  cout << "\tHome\t Timer \tAway" << endl;
  cout << "\t " << scoreboard->HomeTeam.getScore() << " \t " << scoreboard->getTimerMinutes() << ":" << scoreboard->getTimerSeconds() << " \t " << scoreboard->AwayTeam.getScore() << endl; 
  cout << "\t\tQTR " << scoreboard->getQuater() << endl;
  cout << "\t" << scoreboard->getDown() << " DOWN\t\tTO GO " << scoreboard->getYardsToGo() << endl;
}