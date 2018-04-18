/**********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description:
    The Team class header specification file.
    It has 5 Player member variables. It has a default constructor that
    creates 5 default players and puts them into each Player variable and a
    constructor that takes in 5 Player variables to create a Team.
    It has setter and getter functions for each Player variable.
    It has a totalPoints function that returns the integer of the sum of
    all the player's points.
**********************************/

#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team {
private:
  Player pointGuard;
  Player shootingGuard;
  Player smallForward;
  Player powerForward;
  Player center;

public:
  Team();
  Team(Player, Player, Player, Player, Player);
  void setPointGuard(Player);
  Player getPointGuard();
  void setShootingGuard(Player);
  Player getShootingGuard();
  void setSmallForward(Player);
  Player getSmallForward();
  void setPowerForward(Player);
  Player getPowerForward();
  void setCenter(Player);
  Player getCenter();
  int totalPoints();
};

#endif
