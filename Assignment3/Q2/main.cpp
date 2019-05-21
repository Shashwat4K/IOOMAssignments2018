#include "array_size.h"
#include "header.h"
#define MAX_SIZE 100
using namespace std;
int array_size = 0;
void Menu();
int main()
{

	try{
		/*cout << "1) Start\n";
		LinkedList myList1, myList2, myList3, myList4, myList5;
		cout << "2) Complex Number creation\n";
		ComplexInteger c1(1,2);
		ComplexInteger c2(3,-9);
		ComplexInteger c3(-9,-9);
		ComplexInteger c4(9,8);
		ComplexInteger array_c[4];
		array_c[0] = c1; array_c[1] = c2; array_c[2] = c3; array_c[3] = c4;
		cout << "*****************\n";
		cout << "c1 = "; c1.print(); cout << endl;
		cout << "c2 = "; c2.print(); cout << endl;
		cout << "c3 = "; c3.print(); cout << endl;
		cout << "*****************\n";
		cout << "3) List creation\n";
		myList1.insertAtEnd(c1);
		myList1.insertAtEnd(c2);
		myList1.insertAtEnd(c3);
		myList1.printList();
		cout << endl;
		cout << "4) + operator (LL + CI)\n";
		myList2 = myList1 + c4;
		myList2.printList();
		cout << "\n5) + operator (LL + LL)\n";
		myList3 = myList1 + myList2;
		myList3.printList();
		cout << "\n6) * operator\n";
		/*myList1 = -myList3;
		myList1.printList();
		cout << "\n7)\n";
		myList1 = -myList1; 
		myList1.printList();
		cout << "\n8)\n";
		myList1 = myList1 + c1;
		myList1.printList();
		cout << "\n9)\n";
		myList4 = myList3*2; // Segmentation fault occuring for position greater than length or less than 0;
		myList4.printList();
		cout << "\n7) Left shift\n";
		myList3.printList(); cout << endl;
		myList5 = myList3<<8;
		myList5.printList();
		cout << "\n8) Right shift\n";
		myList3.printList(); cout << endl;
		myList5 = myList3>>8;
		myList5.printList();
		cout << "\n9) Search\n";
		if(myList3 % c3){
			cout << "Detected!\n";
		}else{
			c3.print() ;cout << " Not found\n";
		}
		cout << "\n10)\n";
		*/
		ComplexInteger c_array[MAX_SIZE];
		LinkedList myList1, myList2, myList3, myList4, myList5, myList6, myList7, myList8, myList9;
		//Menu();
		int option, done = 0, r, im;
		while(!done)
		{
			Menu();
			cin >> option;
			switch(option)
			{
				case 1:{ 
					int num;
					cout << "Enter number of complex numbers\n";
					cin >> num;
					for(int i = 0; i < num; i++){
						cout << "Enter Real and Imaginary part rrespectively: \n";
						cin >> r >> im;
						ComplexInteger c(r, im);
						c_array[array_size++] = c;
						myList1.insertAtEnd(c);
					}
					cout << "linked list created!\n"; myList1.printList(); cout << endl;
					break;
					}
				case 2:{ 
					cout << "Enter a complex number to insert at end\n";
					cin >> r >> im;
					ComplexInteger c1(r, im);
					myList2 = myList1 + c1;
					myList2.printList(); cout << endl;
					break;
				       }
				case 3:
					int num2;
					cout << "Enter number of complex numbers in list 2\n";
					cin >> num2;
					for(int i = 0; i < num2; i++){
						cout << "Enter Real and Imaginary part rrespectively: \n";
						cin >> r >> im;
						ComplexInteger c(r, im);
						c_array[array_size++] = c;
						myList3.insertAtEnd(c);
					}
					myList4 = myList1 + myList3;
					cout << "Result: "; myList4.printList(); cout << endl;
					break;
				case 4:
					cout << "operator -\n";
					myList5 = -myList1;
					cout << "Result: "; myList5.printList(); cout << endl;
					break;
				case 5:
					int position;
					cout << "Enter the position: ";
					cin >> position;
					myList6 = myList1 * position;
					cout << "Result: "; myList6.printList(); cout << endl;
					break;
				case 6:
					myList7 = c_array;
					cout << "Result: "; myList7.printList(); cout << endl;
					break;
				case 7: 
					int rr;
					cout << "Enter number of Right rotations\n"; cin >> rr;
					myList8 = myList1 >> rr;
					cout << "Before: "; myList1.printList(); cout << endl;
					cout << "Result: "; myList8.printList(); cout << endl;
					break;
				case 8: 
					int lr;
					cout << "Enter number of left rotations\n"; cin >> lr;
					myList9 = myList1 << lr;
					cout << "Before: "; myList1.printList(); cout << endl;
					cout << "Result: "; myList9.printList(); cout << endl;
					break;
				case 9:{ 
					cout << "Enter complex number you want to search in list one\n";
					cin >> r >> im;
					ComplexInteger c3(r, im);
					if(myList1 % c3){
						cout << "Found!\n";
					}else{
						cout << "Not found!\n";
					}
					break;
				       }
				case 0:
					done = 1;
					break;
				default:
					cout << "Enter proper option!\n";
					break;
					
			}
		}

	}catch(PositionNotFoundException e){
		e.printErrorMessage();
	}
	return 0;
}
void Menu(){
	cout << "*********************************************\n";
	cout << "1) Enter complex numbers\n";
	cout << "2) operator + (LL + CI)\n";
	cout << "3) operator + (LL + LL)\n";
	cout << "4) operator -\n";
	cout << "5) operator *\n";
	cout << "6) operator =\n";
	cout << "7) operator >>\n";
	cout << "8) operator <<\n";
	cout << "9) operator % (search)\n";

	cout << "\n\n<Enter 0 to exit>\n";
	cout << "*********************************************\n";	
}
