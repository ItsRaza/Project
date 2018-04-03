#include<iostream>
#include<string>
using namespace std;
class Player
{
  private:
    string name;
    string national;
    string position;
    float initial_bid;
    float highest_rate;
  public:
  Player()
  {
    this->name="";
    this->national="";
    this->position="";
    this->initial_bid=0;
    this->highest_rate=0;
  }
  Player(string name_in,string nation_in,string pos_in,float ibid_in,float hrate_in)
  {
    this->name=name_in;
    this->national=nation_in;
    this->position=pos_in;
    this->initial_bid=ibid_in;
    this->highest_rate=hrate_in;
  }
  Player(Player& clone)
  {
    this->name=clone.name;
    this->national=clone.national;
    this->position=clone.position;
    this->initial_bid=clone.initial_bid;
    this->highest_rate=clone.highest_rate;
  }
  string getName()
  {
    return this->name;
  }
  string getNational()
  {
    return this->national;
  }
  string getPosition()
  {
    return this->position;
  }
  float getIbid()
  {
    return this->initial_bid;
  }
  float getHrate()
  {
    return this->highest_rate;
  }
};