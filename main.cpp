#include <iostream>
#include <iomanip>

#include "Student.h"
#include "Table.h"

using namespace std;

void information();

int main() {
	string name;
	int quiz1, quiz2, mid, fin, people=0;
	
	// Student student[100];
	Student *student = new Student[100];

	cout<<"TO FINISH INPUTING DATA PLEASE PRESS -1\n";
	while (cin>>name) {
		/*
		cout<<"請輸入小考一成績: "<<endl;
		while (cin>>quiz1) {
			if (quiz1 <= 10 && quiz1 >= 0)
				break;
			cout<<"請重新輸入!"<<endl;
		}
		cout<<"請輸入小考二成績: "<<endl;
		while (cin>>quiz2) {
			if (quiz2 <= 10 && quiz2 >= 0)
				break;
			cout<<"請重新輸入!"<<endl;
		}
		cout<<"請輸入期中考成績: "<<endl;
		while (cin>>mid) {
			if (mid <= 100 && mid >= 0)
				break;
			cout<<"請重新輸入!"<<endl;
		}
		cout<<"請輸入期末考成績: "<<endl;
		while (cin>>fin) {
			if (fin <= 100 && fin >= 0)
				break;
			cout<<"請重新輸入!"<<endl;
		}*/
		if (name == "-1")
			break;
		cin>>quiz1>>quiz2>>mid>>fin;
		Student temp(name, quiz1, quiz2, mid, fin);
		student[people++] = temp;
	}

	Table table(student, people);
	char command;
	char grade;
	while (1) {
		information();
		cin>>command;
		switch(command) {
			case '0':
				return 0;
			case '1':
				table.sortByNumber();
				table.print();
				break;
			case '2':
				table.sortByName();
				table.print();
				break;
			case '3':
				table.sortByTotalScore();
				table.print();
				break;
			case '4':
				cin>>grade;
				table.printByGrade(grade);
				break;
			default:
				cout<<"Unknown command!"<<endl;
				break;
		}
	}
}

void information() {
	cout<<"\nTO EXIT, 請按 0.\n";
	cout<<"TO SORT BY SEAT NUMBER, 請按 1.\n";
	cout<<"TO SORT BY NAME, PRESS 2,\n";
	cout<<"TO SORT BY ACADEMIC PERFORMANCE, 請按 3,\n";
	cout<<"TO SORT BY GPA, 請按 4,\n";
	cout<<"ENTER 命令: ";
}

// Examination
// MidtermExam inherits from Examination
// FinalExam inherits from Examination
// Quiz inherits from Examination