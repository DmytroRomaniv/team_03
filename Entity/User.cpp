#include <iostream>
#include "User.h"

using namespace std;


User::User(string newUserName, string newPassword) : userName(newUserName), password(newPassword) {};

void User::setUserName(string newUserName)
{
	UserName = newUserName;
}
void User::setPassword(string newPassword)
{
	password = NewPassword;
}

string User::getUserName()
{
	return userName;
}
string User::getPassword()
{
	return password;
}


istream& operator >> (istream& is, User& inputUser)
{
	cout << "Login: ";
	is >> inputUser.userName;
	cout << "Password: ";
	is >> inputUser.password;
	return is;
}