#include <iostream>
#include "String_methods.cpp"
using namespace std;
void Menu();
int main()
{
	try{
		char s1[50];
		char s2[50];
		int option, done = 0; int position;
		bool b;
		String result;
		cout << "Enter string 1\n";
		cin >> s1;
		cout << "Enter string 2\n";
		cin >> s2;
		String S(s1); String T(s2);
		display(S);
		display(T);
		while(!done)
		{
			Menu();
			cin>>option;
			switch(option)
			{
				case 1:
					break;
				case 2:
					//result = S + T;
					display(S + T);
					break;
			
				case 3:
					cout<<"Given String: "; display(S);
					cout << "Enter the position\n";
					cin >> position;
					cout << S[position] << endl;
					break;
				case 4: 
					
						cout << "S = "; display(S); cout << "T = " ;display(T);
						b = (S == T);
						cout <<"(S == T) " << b << endl;
						break;
					
				case 5:
					
						cout << "S = "; display(S); cout << "T = " ;display(T);
						b = (S != T);
						cout <<"(S != T) " << b << endl;
						break;
					
				case 6: 
					
						cout << "S = "; display(S); cout << "T = " ;display(T);
						b = (S >= T);
						cout <<"(S >= T) " << b << endl;
						break;
					
				/*case 7:
					{
						cout << "S = "; display(S); cout << "T = " ;display(T);
						bool b = (S <= T);
						cout <<"(S <= T) " << b << endl;
						break;
					}
				*/
				case 0:
					done = 1;break;
				default: cout << "Enter correct option\n"; break;
			}
		}

		
	}catch(NullStringException e){
		e.printErrorMessage();
	}catch(ArrayIndexOutOfBoundException e){
		e.printErrorMessage();
	}
	return 0;
}
void Menu()
{
	cout << "*********************************************\n";
	cout << "1) Enter Strings\n";
	cout << "2) operator + \n";
	cout << "3) operator []\n";
	cout << "4) operator ==\n";
	cout << "5) operator !=\n";
	cout << "6) operator >=\n";

	cout << "\n\n<Enter 0 to exit>\n";
	cout << "*********************************************\n";
}
