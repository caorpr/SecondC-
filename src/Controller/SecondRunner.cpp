/*
 * SecondRunner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: cand3952
 */
#include "SecondController.h"


int main()
{
	SecondController * baseController = new SecondController();
	baseController->start();
	//Do the same thing in a different way
	(*baseController).start();
	return 0;
}


