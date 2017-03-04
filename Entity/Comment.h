#pragma once
#include "../Utils/Header.h"
#include "User.h"

using namespace std;


class Comment
{
private:
	string author;
	string plotComment;
	string date;
	User *userPtr;
public:
	Comment() {};

	Comment(string author, string plotComment, string date);

	string getAuthor();

	string getPlot�omment();

	string getDate();

	void setAuthor(string newAuthor);

	void setPlot�omment(string newPlotComment);

	void setDate(string newDate);

	friend istream& operator >> (istream& is, Comment inputComment);

	friend ostream& operator<<(ostream& os, Comment outputComment);
};