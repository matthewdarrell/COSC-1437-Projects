#include <string> 

using namespace std;

class Team {
  private:
    string Name;
    string Coach_Name;
    string Home_City;
    bool Home_Status;
    int Score;
    int Timeout_Count;
  public:
    Team() {}
    Team(string name, string coachName, string homeCity, bool homeStatus)
    {
      Name = name;
      Coach_Name = coachName;
      Home_City = homeCity;
      Home_Status = homeStatus;
      Score = 0;
      Timeout_Count = 0;
    }

    string getName() { return Name;}
    void setName(string name) { Name = name; }
    string getCoachName() { return Coach_Name; }
    void setCoachName(string name) { Coach_Name = name; }
    string getHomeCity() { return Home_City; }
    void setHomeCity(string name) { Home_City = name; }
    bool getHomeStatus() { return Home_Status; }
    void setHomeStatus(bool status) { Home_Status = status; }
    int getScore() { return Score; }
    void setScore(int score) { Score = score; }
    int getTimeoutCount() { return Timeout_Count; }
    void setTimeoutCount(int count) { Timeout_Count = count; } 
};