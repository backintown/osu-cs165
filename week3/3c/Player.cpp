/********************************
 ** Date: 4/18/2018
 ** Author: Alex Cheng
 ** Description:
    The Player class function implementation file.
 ********************************/

#include "Player.hpp"
#include <string>
using std::string;

/***********************
 * Player default constructor
 * constructs a player with an integer variables set to 100
 * name set to empty string
 **********************/

Player::Player() {
  name = "";
  setPoints(100);
  setRebounds(100);
  setAssists(100);
}

/***********************
 * Player constructor
 **********************/

Player::Player(string playerName, int points, int rebounds, int assists) {
  name = playerName;
  setPoints(points);
  setRebounds(rebounds);
  setAssists(assists);
}

/***********************
 * Player:getName
 * returns name variable
 **********************/

string Player::getName() { return name; }

/***********************
 * Player::setPoints
 * sets a player's points to the input
 **********************/

void Player::setPoints(int pointsIn) { points = pointsIn; }

/***********************
 * Player::getPoints
 * returns a player's points
 **********************/

int Player::getPoints() { return points; }

/***********************
 * Player::setRebounds
 * sets a player's rebounds to the input
 **********************/

void Player::setRebounds(int reboundsIn) { rebounds = reboundsIn; }

/***********************
 * Player::getRebounds
 * returns a player's rebounds
 **********************/

int Player::getRebounds() { return rebounds; }

/***********************
 * Player::setAssists
 * sets a player's assists to the input
 **********************/

void Player::setAssists(int assistsIn) { assists = assistsIn; }

/***********************
 * Player::getAssists
 * returns a player's assists
 **********************/

int Player::getAssists() { return assists; }

/***********************
 * Player::hasMorePointsThan
 * returns true if the player has more points than
 * the input player, false otherwise
 **********************/

bool Player::hasMorePointsThan(Player playerIn) {
  if (points > playerIn.getPoints()) {
    return true;
  } else {
    return false;
  }
}
