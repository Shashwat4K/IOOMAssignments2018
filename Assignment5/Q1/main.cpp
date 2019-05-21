#include "header.h"
using namespace std;

int main()
{
//	cout << "Using stack object\n";
//	i10 obj;  //JAVA: i10 obj = new i10(); C++: i10 *ptr = new i10();
//	cout << "Using pointer:\n";
//	Hatchback *cptr = new i10(); // I can't use 'Car *', why? is this because 'Car' being a grandparent of 'i10'?
   try{
	int done = 0, option, choice; 
	while(!done)
	{
		cout << "Choose a car: \n";
		cout << "1) i10" << endl;
		cout << "2) Baleno" << endl;
		cout << "3) Kwid" << endl; 
		cout << "4) Ignis" << endl;
		cout << "5) Duster" << endl;
		cout << "6) Scorpio" << endl;
		cout << "7) Dzire" << endl;
		cout << "8) i20" << endl;
		cout << "9) Vitaara" << endl;
		cout << "10) WagonR" << endl;
		cout << "11) Alto" << endl << endl;

		cout << "\t<Enter 0 to exit>\n";
		cout << "*********************************\n";
		cin >> option;

		switch(option)
		{
			case 1: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					i10 obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new i10();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 2: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Baleno obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new Baleno();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 3: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Kwid obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new Kwid();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 4: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Ignis obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new Ignis();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 5: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Duster obj;
					Car *ptr = &obj;
					ptr->printGroundClearance();
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
					
				}else{
				    SUV *optr = new Duster();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 6: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Scorpio obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					SUV *optr = new Scorpio();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 7: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Dzire obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Sedan *optr = new Dzire();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 8: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					i20 obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new i20();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 9: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Vitaara obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					SUV *optr = new Vitaara();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 10: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					WagonR obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new WagonR();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 11: {
				system("clear");
				cout<<"1)Stack object or 2)heap object? :\n";
				cin >> choice;
				if(choice == 1){
					Alto obj;
					obj.setAttributes();
					obj.printName();
					obj.printType();
					obj.printPower();
					obj.printMileage();
					obj.printGroundClearance();
					obj.printPrice();
				}else{
					Hatchback *optr = new Alto();
					optr->setAttributes();
					optr->printName();
					optr->printType();
					optr->printPower();
					optr->printMileage();
					optr->printGroundClearance();
					optr->printPrice();
					delete optr;
				}
				
				break;
			}
			case 0: done = 1;
				break;
			default: cout << "Enter Appropiate option!\n"; break;		
		}
	}
    }catch(...){
		cout << "ERROR!!!\n";
    }	
	return 0;
}
