#include "Quiz.h"
#include <iostream>

using namespace std;

Quiz::Quiz(){
	Examination();
}

void Quiz::setPercent(double percent){
	this->percent=percent;
}

double Quiz::getPercent(){
	return this->percent;
}