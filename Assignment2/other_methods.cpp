void Scanner(int &i, int &q, char l[])
{
	//int i, q;
	//char l[10];
	cout << "Enter ID: ";
	cin >> i;
	cout << "\nEnter Quantity: ";
	cin >> q;
	cout << "\nEnter Label of item: ";
	cin >> l;
}

void menu()
{
	cout << "Your Own Stack: " << endl;
	cout << "************************" << endl;
	cout << "1. Push in the stack" << endl;
	cout << "2. Pop from the stack" << endl;
	cout << "3. Get the Top element" << endl;
	cout << "4. Display the stack" << endl;
	cout << "5. Sort the stack" << endl;
	cout << "6. Delete the middle element" << endl;
	cout << "0. Exit" << endl;
	cout << "*************************" << endl;
}


