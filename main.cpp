#include <iostream>
#include <iomanip>

#include "Student.h"

using namespace std;

void print(Student *student, int people);

int main() {
	string name;
	int quiz1, quiz2, mid, fin, people=0;
	
	// Student student[100];
	Student *student = new Student[100];

	while (cin>>name) {
		cin>>quiz1>>quiz2>>mid>>fin;
		Student temp(name, quiz1, quiz2, mid, fin);
		student[people++] = temp;
	}

	print(student, people);
	
}

void print(Student *student, int people) {
	cout<<"姓名      ";
	cout<<"小考一    ";
	cout<<"小考二    ";
	cout<<"期中考    ";
	cout<<"期末考    ";
	cout<<"學習成績  ";
	cout<<"等第      "<<endl;
	for (int i=0;i<people;i++)
	{
		student[i].print();
	}
}

// Examination
// MidtermExam inherits from Examination
// FinalExam inherits from Examination
// Quiz inherits from Examination