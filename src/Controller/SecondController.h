/*
 * SecondController.h
 *
 *  Created on: Jan 19, 2016
 *      Author: cand3952
 */

#ifndef CONTROLLER_SECONDCONTROLLER_H_
#define CONTROLLER_SECONDCONTROLLER_H_
#include <string>
using namespace std;


class SecondController
{
private:
	int classCount;
	string className;
public:
	SecondController();
	void setClassCount(int classCount);
	int getClassCount();
	void start();
	string getClassName();
	void setClassName(string className);
};



#endif /* CONTROLLER_SECONDCONTROLLER_H_ */
