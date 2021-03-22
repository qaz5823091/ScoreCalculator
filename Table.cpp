#include "Table.h"

#include <iostream>
#include <iomanip>

using namespace std;

void change(Student *a, Student *b) {
	Student temp;
	temp = *a;
	*a = *b;
	*b = temp;

	return ;
}

void decoration() {
	cout<<"------------------------------------------------------------------------------------"<<endl;
	cout<<"座號      ";
	cout<<"姓名      ";
	cout<<"小考一    ";
	cout<<"小考二    ";
	cout<<"期中考    ";
	cout<<"期末考    ";
	cout<<"學習成績  ";
	cout<<"等第      ";
	cout<<"PR值      "<<endl;

	return ;
}

Table::Table(Student *sPtr, int people) {
	this->sPtr = sPtr;
	this->people = people;

	setQuiz1Average();
	setQuiz2Average();
	setMidAverage();
	setFinAverage();
	setTotalAverage();
	setPR();
}

Table::~Table() {
	delete [] sPtr;
}

void Table::setQuiz1Average() {
	quiz1Average = 0;
	for (int i=0;i<people;i++) {
		quiz1Average += sPtr[i].getQuiz1Score();
	}

	quiz1Average = quiz1Average / people;
}

void Table::setQuiz2Average() {
	quiz2Average = 0;
	for (int i=0;i<people;i++) {
		quiz2Average += sPtr[i].getQuiz2Score();
	}

	quiz2Average = quiz2Average / people;
}

void Table::setMidAverage() {
	midAverage = 0;
	for (int i=0;i<people;i++) {
		midAverage += sPtr[i].getMidScore();
	}

	midAverage = midAverage / people;
}

void Table::setFinAverage() {
	finAverage = 0;
	for (int i=0;i<people;i++) {
		finAverage += sPtr[i].getFinScore();
	}

	finAverage = finAverage / people;
}

void Table::setTotalAverage() {
	totalAverage = 0;
	for (int i=0;i<people;i++) {
		totalAverage += sPtr[i].getTotalScore();
	}

	totalAverage = totalAverage / people;
}

void Table::setPR() {
	sortByTotalScore();
	for (int i=0;i<people;i++) {
		int pr = ( people - (i+1) ) / double(people) * 100;
		sPtr[i].setPR(pr);
	}

	sortByNumber();
}

double Table::getQuiz1Average() {
	return this->quiz1Average;
}

double Table::getQuiz2Average() {
	return this->quiz2Average;
}

double Table::getMidAverage() {
	return this->midAverage;
}

double Table::getFinAverage() {
	return this->finAverage;
}

double Table::getTotalAverage() {
	return this->totalAverage;
}

void Table::sortByTotalScore() {
	for (int i=people-1;i>=0;i--) {
		for (int j=0;j<i;j++) {
			if ( sPtr[j].getTotalScore() < sPtr[j+1].getTotalScore()) {
				change(&sPtr[j], &sPtr[j+1]);
			}
		}
	}

	return ;
}

void Table::sortByNumber() {
	for(int i=people-1; i>=0; i--){
		for(int j=0; j<i; j++){
			if(sPtr[j].getNumber()>sPtr[j+1].getNumber()){
				change(&sPtr[j],&sPtr[j+1]);
			}
		}
	}

	return ;
}

void Table::sortByName() {
	for(int i=people-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(sPtr[j].getName()>sPtr[j+1].getName())
			{
				change(&sPtr[j],&sPtr[j+1]);
			}
		}
	}
}

void Table::printByGrade(char grade) {
	decoration();

	for (int i=0;i<people;i++) {
		if ( sPtr[i].getGrade() == toupper(grade))
			sPtr[i].print();
	}

	return ;
} 

void Table::print() {
	decoration();

	for (int i=0;i<people;i++) {
		sPtr[i].print();
	}
	cout<<"------------------------------------------------------------------------------------"<<endl;
	cout<<"平均                ";
	cout<<setw(10)<<getQuiz1Average();
	cout<<setw(10)<<getQuiz2Average();
	cout<<setw(10)<<getMidAverage();
	cout<<setw(10)<<getFinAverage();
	cout<<setw(10)<<getTotalAverage()<<endl;

	return ;
}

