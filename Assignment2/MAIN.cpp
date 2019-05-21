#include "myHeader.h"
int main()
{
	int length;
	cout << "Enter the size of Stack you want to create: ";
	cin >> length;
	Stack S(length);
	try
	{
		int done = 0, option;
		Item data;
		int in_id, in_quant; char in_label[10];
		//int n = 0;
		//int m = S.Size();
		while(!done)
		{
			menu();
			cout << "Enter correct option: "; cin >> option;
			switch(option)
			{
				case 1: Scanner(in_id, in_quant, in_label);
						S.push(in_id, in_quant, in_label);
						break;
				case 2: data = S.pop();
						data.printDetails();
						break;
				case 3: data = S.peek();
						cout << "Element at top of Stack is: " << endl;
						data.printDetails();
						break;
				case 4: S.display();
						break;				
				case 5: S.Sort(S);
						S.display();
						break;
				case 6: S.removeMid(S, S.Size());
						break;		
				case 0: cout << "Thank you!" << endl;
						done = 1;
						break;
				default:
						cout << "Enter correct option! \n";
						break;		
			}
		}
		
	}
	catch(StackFullException e)
	{
		cout << e.getErrorMessage();
	}
	catch(StackEmptyException e)
	{
		cout << e.getErrorMessage();
	}
	
	return 0;
}
