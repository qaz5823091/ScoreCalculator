#include "Student.h"

#include <iostream>
#include <iomanip>
using namespace std;

Student::Student() {
	
}

Student::Student(string name,int quiz1,int quiz2,int mid,int fin) {
	this->quiz[0].setPercent(0.25);
	this->quiz[1].setPercent(0.25);
	this->mid.setPercent(0.25);
	this->fin.setPercent(0.5);

	setName(name);

	this->quiz[0].setScore(quiz1);
	this->quiz[1].setScore(quiz2);
	this->mid.setScore(mid);
	this->fin.setScore(fin);
	
	setTotalScore();
	setGrade();
}

void Student::setName(string name) {
	this->name = name;

	return ;
}

void Student::setTotalScore() {
	// content
	double score=0;
	double quizScore=0, examScore=0;
	examScore=mid.getScore()*mid.getPercent()+fin.getScore()*fin.getPercent();
	quizScore=(quiz[0].getScore()+quiz[1].getScore())/2.0*10*quiz[0].getPercent();

	score=quizScore+examScore;

	this->totalScore = score;
}

void Student::setGrade() {

	if(totalScore>=90){
    	grade='A';
	}
	else if(totalScore>=80){
		grade='B';
	}
	else if(totalScore>=70){
		grade='C';
	}
	else if(totalScore>=60){
		grade='D';
	}
	else
	{
		grade='F';
	}
}

string Student::getName() {
	return this->name;
}

double Student::getTotalScore() {
	return this->totalScore;
}

char Student::getGrade() {
	return this->grade;
}

void Student::print() {
	cout<<fixed<<setprecision(1)<<left;
	cout<<setw(10)<<name;
	cout<<setw(10)<<quiz[0].getScore();
	cout<<setw(10)<<quiz[1].getScore();
	cout<<setw(10)<<mid.getScore();
	cout<<setw(10)<<fin.getScore();
	cout<<setw(10)<<totalScore;
	cout<<setw(10)<<grade<<endl;
}