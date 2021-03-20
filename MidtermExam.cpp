#include "MidtermExam.h"

#include <iostream>
using namespace std;

MidtermExam::MidtermExam() {
	Examination();
}

void MidtermExam::setPercent(double percent) {
	this->percent = percent;

	return ;
}

double MidtermExam::getPercent() {
	return this->percent;
}