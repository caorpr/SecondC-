/*
 * SecondController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: cand3952
 */
#include "SecondController.h";
#include <iostream>
using namespace std;

SecondController :: SecondController()
{
	this->classCount = 21;
	this->className = "America\'s data structures class";
}


void SecondController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

void SecondController :: setClassName(string className)
{
	this->className = className;
}

string SecondController :: getClassName()
{
	return this->className;
}

int SecondController :: getClassCount()
{
	return this->classCount;
}

void SecondController :: start()
{
	cout << "Welcome to C++ class #2!!" << endl;
	cout << className << endl;
	cout << "The current value of classCount is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new number for class" << endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout << "The current value of classCount is " << getClassCount() << endl;
	cout << "The content (a char) at the 5th spot in the string is " << className[4] << endl;
}

