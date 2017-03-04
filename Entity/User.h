#pragma once
#include "Event.h"

using namespace std;

class User
{
private:
	string userName;
	string password;

public:
	User() {};

	User(string newUserName, string newPassword);

	string getUserName();

	string getPassword();

	void setUserName(string newUserName);

	void setPassword(string newPassword);

	friend istream& operator >> (istream& is, User& inputUser);
};
