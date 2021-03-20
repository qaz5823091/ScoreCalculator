#include "FinalExam.h"

#include <iostream>
using namespace std;

FinalExam::FinalExam() {
	Examination();
}

void FinalExam::setPercent(double percent) {
	this->percent = percent;

	return ;
}

double FinalExam::getPercent() {
	return this->percent;
}