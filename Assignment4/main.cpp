#include <string.h>
#include <iostream>
#include "String.cpp"

using namespace std;

int main()
{
	char a[9], b[6];
	cout << "Enter String 'a' and 'b'\n";
	cin >> a;
	cin >> b;
	Pstring s(a), t(b);

	s.display();
	t.display();

	Pstring2 s1(a);	Pstring2 s2(b);
	/*cout << "s1.display() ";s1.display();
	cout << "**********************\n";
	Pstring2 s3 = s1.left(s2, 5);
	cout << "s3.display() "; s3.display();
	cout << "s1.display() ";s1.display();
	cout << "Middle\n";
	s3 = s1.middle(s2, 3, 5);
	cout << "s3.display() "; s3.display();
	cout << "Right\n";
	s3 = s1.right(s2, 5);
	cout << "s3.display() "; s3.display();*/
	int option, start, end, n;
	cout << "0 left, 1 middle, 2 right\n";
	cin >> option;
	switch(option){
		case 0:
			{
				cout << "Enter n ";cin >> n; cout << endl;
				Pstring2 s3 = s1.left(s2, n);
				cout << "s3.display() "; s3.display(); cout << endl;
				cout << "s1.display() "; s1.display();
				break;
			}
		case 1:
			{
				cout << "enter start and end "; cin >> start >> end; cout << endl;
				Pstring2 s3 = s1.middle(s2, start, end);
				cout << "s3.display() "; s3.display(); cout << endl;
				//cout << "s1.display() "; s1.display();
				break;
			}
		default:
			break;
	}
	return 0;
}
