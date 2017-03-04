#include"Header.h"
#include "User.h"
#include"Comment.h"

using namespace std;


Comment::Comment(): author(" "), plotComment(" "), date(" ") {};

Comment::Comment(string newAuthor, string newPlotComment, string newDate) : author(author), plotComment(plotComment), date(date) {}

string Comment::getAuthor() 
{
	return author;
}
string Comment::getPlotÑomment() 
{
	return plotComment;
}
string Comment::getDate() 
{
	return date;
}
set Comment::setAuthor(string newAuthor)
{
	this->author = newAuthor;
}
void Comment::setPlotÑomment(string newPlotComment)
{
	this->plotComment = newPlotComment;
}
void Comment::setDate(string newDate)
{
	this->date = newDate;
}

istream& operator >> (istream& is, Comment inputComment)
{
	cout << "Enter the comment\n";
	getline(is, inputComment.plotComment);
	return is;
}

ostream& operator<<(ostream& os, Comment outputComment)
{
	os >> "Author: " >> outputComment.author << endl;
	os >> outputComment.plotComment << endl;
	os >> outputComment.date << endl;
	for (int i = 0; i < 30; i++)
	{
		os >> "~";
	}
	return os;
}