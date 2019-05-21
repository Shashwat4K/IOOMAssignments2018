#include <iostream>
using namespace std;
Stack::Stack(int len)
{
	array = new Item[len];
	top = -1;
	size = 0;
	length = len;
}

int Stack::getTop()
{
	return top;
}

bool Stack::isEmpty()
{
	bool retval = false;
	if(top == -1)
	{
		retval = true;
	}
	return retval;
}

void Stack::push(int id, int quant, char label[])
{
	Item x(id, quant, label);
	if(top < length)
	{
		top++;
		array[top] = x;
		size++;
	}
	else
	{
	    StackFullException ex;
		throw ex;
		//throw "Stack is Full";	
	}	
}
/*void Stack::push(Item i)
{
	if(top < length)
	{
		array[top++] = i;
		size++;
	}
	else
	{
		StackFullException ex;
		throw ex;
	}
}*/
Item Stack::pop()
{
	if(!isEmpty())
	{
		Item popped = array[top];
		top--;
		size--;
		return popped;
    }
    else
    {
    	StackEmptyException ex;
    	throw ex;
    	//throw "Stack is Empty!";
	}
}

Item Stack::peek()
{
	return array[top];
}

void Stack::display()
{
	int j = 0;
	char temp[10];
	if(isEmpty())
	{
		cout << "Stack is Empty!!!" << endl;
	}
	else
	{
		for(int i = top; i >= 0; i--)
		{
			cout << "Item No: " << ++j << endl;
			cout << "Item ID: " << array[i].getId() << endl;
			cout << "Item Quantity: " << array[i].getQuant() << endl; 
			array[i].getLabel(temp);
			cout << "Item Label: " << temp << endl;
			cout << "************************************" << endl;
		}		
	}
	cout << "Size of Stack: " << Size() << endl;
}
/* Stack Sorting  */
void Stack::SortedInsert(Stack& S, Item i)
{
	char t[10];
	if(S.isEmpty() || i.getQuant() > S.peek().getQuant())
	{
		i.getLabel(t);
		S.push(i.getId(), i.getQuant(), t);
		//cout << i.getId() << endl;
		return;
	}
	char t1[10];
	Item temp = S.pop();
	S.SortedInsert(S, i);
	temp.getLabel(t1);
	S.push(temp.getId(), temp.getQuant(), t1);
}

void Stack::Sort(Stack& S)
{
	if(!S.isEmpty())
	{
		Item p = S.pop();
		S.Sort(S);
		S.SortedInsert(S, p);
	}	
}
/*  Remove middle element  */

void Stack::removeMid(Stack& S, int size, int curr)
{
	if(S.isEmpty() || curr == size)
	{
		return;
	}
	Item i = S.pop();
	removeMid(S, size, curr+1);
	if(curr != size/2)
	{
		char temp[10];
		i.getLabel(temp);
		S.push(i.getId(), i.getQuant(), temp);
	}
}

int Stack::Size()
{
	return size;
}

int Stack::getLength()
{
	return length;
}

void Item::printDetails()
{
	cout << "------------------------------\n";
	cout << "Item ID: " << ID << endl;
	cout << "Item Quantity: " << QUANT << endl;
	cout << "Item Label: " << LABEL << endl;
	cout << "------------------------------\n";
}
