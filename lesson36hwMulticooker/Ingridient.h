#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ingridient
{
protected:
	string name;
	float minutes; //to cook
public:

	Ingridient() {
		name = "";
		minutes = 0;
	}

	Ingridient(string name, float minutes) {
		this->name = name;
		this->minutes = minutes;
	}

	void setName(string name) { this->name = name; }
	void setMinutes(float minutes) { this->minutes = minutes;}

	string getName()const { return name; }
	float getMinutes()const { return minutes; }

	bool operator<(const Ingridient& ingridientRight)const {
		return minutes < ingridientRight.minutes;
	}

	void showIngridient()const {
		cout << "Name: " << name << endl;
		cout << "Minutes: " << minutes << endl;
	}
};

