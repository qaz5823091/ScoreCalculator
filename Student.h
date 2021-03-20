#ifndef STUDENT_H
#define STUDENT_H

#include "Quiz.h"
#include "MidtermExam.h"
#include "FinalExam.h"
#include <iostream>
using namespace std;

class Student {
	private:
		string name;

		Quiz quiz[2];
		MidtermExam mid;
		FinalExam fin;

		double totalScore;
		char grade;

	public:
		Student();
		Student(string ,int ,int ,int ,int );

		void setName(string );
		void setTotalScore();
		void setGrade();

		string getName();
		double getTotalScore();
		char getGrade();

		void print();
};

#endif