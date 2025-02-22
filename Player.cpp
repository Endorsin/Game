
#include <string>
#include "Player.h"



//constructor
Player::Player(string pname, int x, int y):Character(){
   name = pname;
   locationX = x;
   locationY = y; 
}
Player::Player():Character(){ // call the constructor of the base class
    pathToImage = "../images/user1.bmp";
    velY = 1;

}




//getters

int Player::getScore(){
    return score;
}
int Player::getNumLife(){
  return numLife;
}
//mutators
void Player::decreaseNumLife(){
  numLife -= 1;
}
void Player::setScore(int scr){
  score = scr;
}
bool Player::isAlive(){
  return numLife > 0;
}




