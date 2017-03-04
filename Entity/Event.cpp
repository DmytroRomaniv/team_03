#include <string>
#include <ctime>
#include "Event.h"
#include "Comment.h"

Event::Event(string newTitle, string newPlot, string newShortPlot, User newAuthor, vector<Comment> newComments, string newDate):
	title(newTitle),plot(newPlot),author(newAuthor),date(newDate)
{
	comments.clear();
	comments = newComments;
	for (int i = 0; i < newComments.size(); i++)
	{
		comments[i] = newComments[i];
	}
}

//get
string Event::getTitle()
{
	return title;
}

string Event::getPlot()
{
	return plot;
}

string  Event::getShortPlot()
{
	return shortPlot;
}

string Event::getDate()
{
	return date;
}

int Event::getPopularity()
{
	return popularity;
}


// set
void Event::setTitle(string newTitle)
{
	title = newTitle;
}

void Event::setPlot(string newPlot)
{
	plot = newPlot;
}

void  Event::setShortPlot(string newShortPlot)
{
	shortPlot = newShortPlot;
}

void Event::setDate(string newDate)
{
	date = newDate;
}

void Event::setPopularity(int pop)
{
	popularity = pop;
}

//operators

Event& Event::operator=(const Event& newEvent)
{
	title = newEvent.title;
	date = newEvent.date;
	plot = newEvent.plot;
	shortPlot = newEvent.shortPlot;
	author = newEvent.author;
	comments = newEvent.comments;
	popularity = newEvent.popularity;
	return *this;
}

ostream& operator<< (ostream& os, const Event& outputEvent)
{
	os << outputEvent.title << endl;
	os << "------------------\n";
	os << "Author: " << endl;
	os << outputEvent.plot << endl << endl;
	os <<"Date: "<< outputEvent.date<<endl;
	for (int i = 0; i < 120; i++)
	{
		os << "_";
	}
	os << endl;
	return os;
}

istream& operator >> (istream& is, Event& input)
{
	cout << "Enter the title\n";
	getline(cin, input.title);
	cout << "Enter the plot\n";
	getline(cin, input.plot);
	time_t now = time(0);
	input.setDate(ctime(&now));
	return is;
};

Event::~Event()
{
	if (comments.empty()==false)
	{
		comments.clear();
	}
}




