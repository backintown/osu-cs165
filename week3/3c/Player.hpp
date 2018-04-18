/***************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description:
    The Player class header specification file.
    It has four member variables, player name, points, rebounds, and assists.
    The class has a default constructor that sets all integer variables to 100
and name to empty string and one that takes four arguments. It has setters and
getters for each variable. It has a boolean function that takes one Player and
returns true is the current player has more points than the argument player.
****************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
using std::string;

class Player {
private:
  string name;
  int points;
  int rebounds;
  int assists;

public:
  Player();
  Player(string, int, int, int);
  string getName();
  void setPoints(int);
  int getPoints();
  void setRebounds(int);
  int getRebounds();
  void setAssists(int);
  int getAssists();
  bool hasMorePointsThan(Player);
};

#endif
