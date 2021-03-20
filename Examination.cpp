#include "Examination.h"

#include <iostream>
using namespace std;

Examination::Examination() {

}

void Examination::setScore(int score) {
	this->score = score;

	return ;
}

int Examination::getScore() {
	return this->score;
}