#include <iostream>
#include <string.h>
#include "Person.cpp"
#include "Teacher.cpp"
#include "NonTeachingStaff.cpp"
#include "Student.cpp"
using namespace std;

Subject* createList();
int main()
{
	Person *ptr;
	char name[50];
	char phone_number[20];
	char email[50];
	char roll_no[11];
	char job_role[20];
	cout << "Enter Name: ";
	cin >> name; cout << endl;
	cout << "Enter Phone Number: ";
	cin >> phone_number; cout << endl;
	cout << "Enter email address: ";
	cin >> email; cout << endl;
	int option;
	cout << "Enter 0 for Person, 1 for Teacher, 2 for Non-Teaching Staff and 3 for Student\n"; cin >> option;
	switch(option)
	{
		case 0:	
			{ 
				
				//Person p(name, phone_number, email);
				ptr = new Person(name, phone_number, email);
				ptr->printDetails();
				delete ptr;
				break;
                        }
		case 1:
			{
				
				int tid;
				cout << "Enter teacher id: " << endl;
				cin >> tid;
				cout << "Enter list of subjects\n";
				Subject *myList = createList();
				//Teacher t(name, phone_number, email, tid, myList);
				ptr = new Teacher(name, phone_number, email, tid, myList);
				ptr->printDetails();
				delete ptr;
				break;
			}
		case 2:
			{
				
				int tid;
				cout << "Enter teacher id: "; cin >> tid; cout << endl;
				cout << "Enter Job Role: "; cin >> job_role; cout << endl;
				//NonTeachingStaff n(name, phone_number, email, tid, job_role);
				ptr = new NonTeachingStaff(name, phone_number, email, tid, job_role);
				ptr->printDetails();
				delete ptr;
				break;
			}
		case 3:
			{
				
				float cgpa;
				cout << "Enter Roll Number of student: "; cin >> roll_no; cout << endl;
				cout << "Enter CGPA: "; cin >> cgpa; cout << endl;
				//Student s(name, phone_number, email, roll_no, cgpa);
				ptr = new Student(name, phone_number, email, roll_no, cgpa);
				ptr->printDetails();
				delete ptr;
				break;
			}
	}
	return 0;
}
Subject* createList()
{
	int sub, i = 0;
	char subject[10];
	cout << "Enter no. of subjects taught: "; cin >> sub;
	Subject *head = NULL;
	while(i < sub){
		cout << "Enter name of subject: "; cin >> subject;
		Subject *newSub = new Subject(subject);
		newSub->setNext(head);
		head = newSub;
		i++; 
	}
	return head;
}

