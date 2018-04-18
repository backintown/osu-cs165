/********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description:
    The Team class function implementation file.
********************************/

#include "Team.hpp"
#include "Player.hpp"

/***********************
 * Team default constructor
 **********************/

Team::Team() {
  Player pg, sg, sf, pf, ct;
  pointGuard = pg;
  shootingGuard = sg;
  smallForward = sf;
  powerForward = pf;
  center = ct;
}

/***********************
 * Team constructor
 * takes in 5 players for the 5 positions
 **********************/

Team::Team(Player pg, Player sg, Player sf, Player pf, Player ct) {
  pointGuard = pg;
  shootingGuard = sg;
  smallForward = sf;
  powerForward = pf;
  center = ct;
}

/***********************
 * Team::setX
 * setter functions for each position on the team
 **********************/

void Team::setPointGuard(Player pg) { pointGuard = pg; }
void Team::setShootingGuard(Player sg) { shootingGuard = sg; }
void Team::setSmallForward(Player sf) { smallForward = sf; }
void Team::setPowerForward(Player pf) { powerForward = pf; }
void Team::setCenter(Player ct) { center = ct; }

/***********************
 * Team::getX
 * getter functions for each position on the team.
 * returns Player.
 **********************/

Player Team::getPointGuard() { return pointGuard; }
Player Team::getSmallForward() { return smallForward; }
Player Team::getShootingGuard() { return shootingGuard; }
Player Team::getPowerForward() { return powerForward; }
Player Team::getCenter() { return center; }

/***********************
 * Team::totalPoints
 * returns an integer sum of the players' points
 **********************/

int Team::totalPoints() {
  int totalPoints = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
  return totalPoints;
}
