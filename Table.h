#ifndef TABLE_H
#define TABLE_H

#include "Student.h"

class Table {
	private:
		Student *sPtr;
		int people;

		double quiz1Average;
		double quiz2Average;
		double midAverage;
		double finAverage;
		double totalAverage;

	public:
		Table(Student *sPtr, int people);
		~Table();

		void setQuiz1Average();
		void setQuiz2Average();
		void setMidAverage();
		void setFinAverage();
		void setTotalAverage();
		void setPR();

		double getQuiz1Average();
		double getQuiz2Average();
		double getMidAverage();
		double getFinAverage();
		double getTotalAverage();

		void sortByTotalScore();
		void sortByNumber();
		void sortByName();
		void sortByPR();
		void printByGrade(char grade);
		void print();
};

#endif