/********************************
 ** Date: 6/6/2018
 ** Author: Alex Cheng
 ** Description:
    This is the Ship class's implementation file. The constructor initializes a
ship instance. The getter functions returns each specified variable. The takeHit
function increments the damage variable.
*********************************/

#include "Ship.hpp"

/*
constructor - Takes in a string and int for name and length respectively and
sets the variables to the inputs. Also initializes damage to 0.
*/
Ship::Ship(string name, int length) {
  this->name = name;
  this->length = length;
  damage = 0;
}

/*
getName - returns the ship's name
*/
string Ship::getName() { return name; };

/*
getLength - returns the ship's length
*/
int Ship::getLength() { return length; };

/*
getDamage - returns the amount of damage taken so far
*/
int Ship::getDamage() { return damage; };

/*
takeHit - increments damage
*/
void Ship::takeHit() { damage++; };
