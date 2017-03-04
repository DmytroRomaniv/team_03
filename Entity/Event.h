#pragma once
#include"User.h"
#include <vector>
#include <iostream>
#include <string>
#include "Comment.h"

enum Priorities { low, medium, high };

class Event
{
private:
	string title;
	string date;
	string plot;
	string shortPlot;
	User author;
	vector<Comment> comments;
	int popularity;

public:
	Event() {};

	Event(string newTitle, string newPassword, string newShortPlot, User newAuthor, vector<Comment> newComments, string newDate);
	
	//get
	string getTitle();

	string getPlot();

	string  getShortPlot();

	string getDate();

	int getPopularity();

	Priorities getPriority();

	// set
	void setTitle(string t);

	void setPlot(string p);

	void setShortPlot(string shP);

	void setDate(string newDate);

	void setPopularity(int newPopularity);

	void setPriority(Priorities newPriority);

	//operators

	Event& operator=(const Event& newEvent);

	friend istream& operator >> (istream& is, Event& input);

	friend ostream& operator<< (ostream& os, const Event& outputEvent);

	~Event();
};
