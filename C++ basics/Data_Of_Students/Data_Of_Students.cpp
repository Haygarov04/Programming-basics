#include <iostream>
#include <string.h>
#include <string>
#include "CDate.h"


using namespace std;
class CStudent {
private:
	string name, EGN, FN;
	int course;
	int grades[10];
public:
	 CStudent();
	 CStudent(string name, string EGN, string FN);
	 CStudent(string name,string EGN,string FN,int course);
	 void getData();
	 void display();
	 void calculateAvarageGrade();
	
};
CStudent::CStudent() {
	name = "";
	EGN = "";
	FN = "";
	course = 0;
	for (int i = 0; i < 10; i++)
	{
		grades[i] = 0;
	}
}
CStudent::CStudent(string name, string EGN, string FN)
{
	this->name = name;this->EGN = EGN;this->FN = FN;this->course = 1;
	for (int i = 0; i < 10; i++)
	{
		grades[i] = 0;
	}
}
CStudent::CStudent(string name, string EGN, string FN, int course)
{
	this->name = name;this->EGN = EGN;this->FN = FN;this->course = course;
}
void CStudent::getData()
{
	cout << "Name: ";cin >> name;
	cout << "EGN: ";cin >> EGN;
	cout << "FN: ";cin >> FN;
	cout << "Course: ";cin >> course;
	cout << "Grades: ";cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "grade "<< i+1<<":";cin >> grades[i];
	}
}
void CStudent::display()
{
	cout <<"Name: "<< name << endl;
	cout << "EGN: " << EGN << endl;
	cout << "FN: " << FN << endl;
	cout << "Course: " << course << endl;
	cout << "Grades: ";cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << grades[i]<<",";
	}
	cout << grades[9] << ".";
}
void CStudent::calculateAvarageGrade()
{
	cout << endl;	double avarage=0;
	for (int i = 0; i < 10; i++)
	{
		avarage += grades[i];
	}
	avarage /= 10;
	cout << "The average grade is :" << avarage<<endl;
}
int main()
{

	/*CStudent student1("Shabale","123131","123123");
	student1.display();*/

	CStudent student2;
	student2.getData();
	student2.display();
	student2.calculateAvarageGrade();

	/*CStudent group[10];
	for (int i = 0; i < 10; i++)
	{

	}*/

}

