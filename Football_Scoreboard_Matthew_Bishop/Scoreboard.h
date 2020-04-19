#include <iostream>
#include "Team.h"

using namespace std;

class Scoreboard {
  private:
    int Quarter;
    int Down;
    int YardsToGo;
    int TimerMinutes;
    int TimerSeconds;
  public:
    Team HomeTeam;
    Team AwayTeam;
    
    Scoreboard() {}
    Scoreboard(Team homeTeam, Team awayTeam)
    {
      HomeTeam = homeTeam;
      AwayTeam = awayTeam;
      Quarter = 1;
      Down = 1;
      YardsToGo = 100;
      TimerMinutes = 60;
      TimerSeconds = 0;
    }

    int getQuater() { return Quarter; }
    void setQuater(int quater) { if (quater > 0 && quater <= 4) Quarter = quater; else cout << "Quater must be 1-4" << endl;}
    int getDown() { return Down; }
    void setDown(int down) { if (down > 0 && down <= 4) Down = down; else cout << "Down must be 1-4" << endl;}
    int getYardsToGo() { return YardsToGo; }
    void setYardsToGo(int yardsToGo) { if (yardsToGo >= 0 && yardsToGo <= 100) YardsToGo = yardsToGo; else cout << "YardsToGo must be 0-100" << endl;}
    int getTimerMinutes() { return TimerMinutes; }
    void setTimerMinutes(int timerMinutes) { if (timerMinutes >= 0 && timerMinutes <= 60) TimerMinutes = timerMinutes; else cout << "TimerMinutes must be 0-60" << endl;}
    int getTimerSeconds() { return TimerSeconds; }
    void setTimerSeconds(int timerSeconds) { if (timerSeconds >= 0 && timerSeconds <= 60) TimerSeconds = timerSeconds; else cout << "TimerSeconds must be 0-60" << endl;}
};