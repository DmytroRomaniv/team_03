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

	string getPlotÑomment();

	string getDate();

	void setAuthor(string newAuthor);

	void setPlotÑomment(string newPlotComment);

	void setDate(string newDate);

	friend istream& operator >> (istream& is, Comment inputComment);

	friend ostream& operator<<(ostream& os, Comment outputComment);
};