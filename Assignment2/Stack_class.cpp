#include <string>
class Stack
{
	private:
		Item* array; // Changes to be made here
		int top;
		int size;
		int length;
	public:
		Stack(int len);
		int getTop();
		bool isEmpty();
		void push(int id, int quant, char label[]);
		void push(Item i);
		Item pop();
		Item peek();
		void display();
		void Sort(Stack& s);         		 //
		void SortedInsert(Stack& s, Item i); // 
		void removeMid(Stack& S, int size, int curr=0);
		//void remove(Stack& S, int t, int *n);
		int Size();
		int getLength();
};
/*   Exception Handling Classes   */
class StackFullException
{
	private:
		
		std::string errMessage = "Stack is FULL!";
	public:
		/*StackFullException(string msg)
		{
			errMessage = msg;	
		}*/
		std::string getErrorMessage()
		{
			return errMessage;	
		}	
};

class StackEmptyException
{
	private:
		std::string errMessage = "Stack is EMPTY!";
	public:
		/*StackEmptyException(string msg)
		{
			errMessage = msg	
		}*/
		std::string getErrorMessage()
		{
			return errMessage;
		}	
};
