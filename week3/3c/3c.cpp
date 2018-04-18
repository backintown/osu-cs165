#include "Player.hpp"
#include "Team.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
  Player p1("Charlotte", 24, 10, 7);
  Player p2("Emily", 21, 13, 9);
  Player p3("Anne", 20, 10, 8);
  Player p4("Jane", 19, 10, 10);
  Player p5("Mary", 18, 11, 8);
  Player p6("hello", 20, 10, 10);
  cout << p3.hasMorePointsThan(p6) << endl;
  if (p1.hasMorePointsThan(p4))
    cout << p1.getName() << " has more points than " << p4.getName() << "."
         << endl;
  p5.setRebounds(12);

  Team team1(p1, p2, p3, p4, p5);
  Team team2;
  team1.setPointGuard(p6);
  team1.setShootingGuard(p6);
  team1.setSmallForward(p6);
  team1.setPowerForward(p6);
  team1.setCenter(p6);
  Player yeye = team2.getPointGuard();
  cout << yeye.getName()<<endl;
  cout<<"team2 pts: " << team2.totalPoints()<<endl;
  cout<<"team1 pts: " << team1.totalPoints()<<endl;
  Player p = team1.getShootingGuard();
  cout << p.getName() << endl;
  return 0;
}
