#include<iostream>
#include<string>
using namespace std;
class User
{
  public:
    User();
    User(string name_in);
    User(User& clone);
    void setName(string name_in);
    string getName();
  private:
    string name;
};
User::User()
{
  this->name="User";
}
User::User(string name_in)
{
  this->name=name_in;
}
User::User(User& clone)
{
  this->name=clone.name;
}
void User::setName(string name_in)
{
  this->name=name_in;
}
string User::getName()
{
  return this->name;
}