#ifndef STUDENT_H
#define STUDENT_H

#include "Quiz.h"
#include "MidtermExam.h"
#include "FinalExam.h"
#include <iostream>
using namespace std;

class Student {
	private:
		int number;
		string name;

		Quiz quiz[2];
		MidtermExam mid;
		FinalExam fin;

		double totalScore;
		char grade;
		int pr;

	public:
		Student();
		Student(string ,int ,int ,int ,int );

		void setNumber(int );
		void setName(string);
		void setTotalScore();
		void setGrade();
		void setPR(int );

		int getNumber();
		string getName();
		int getQuiz1Score();
		int getQuiz2Score();
		int getMidScore();
		int getFinScore();
		double getTotalScore();
		char getGrade();
		int getPR();

		void print();
};

#endif