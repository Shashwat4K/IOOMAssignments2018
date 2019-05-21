#include "array_size.h"
class Node;
class LinkedList
{
	private:
		Node *head; // Head of the linked list
		int length;
	public:
		LinkedList();
		//LinkedList(Node x);
		//LinkedList(const LinkedList& l);
		~LinkedList();
		void insertAtEnd(ComplexInteger c);
		void deleteAtEnd();
		//Operator overloading methods
		friend LinkedList& operator+ (const LinkedList& l, ComplexInteger c); // Appending a complex number at the end
		friend LinkedList& operator+ (const LinkedList& l1, const LinkedList& l2); // Concatenationg two lists
		friend LinkedList& operator- (const LinkedList& l); // Deletes a node from end
		friend LinkedList& operator* (const LinkedList& l, int pos); // Deletes node 'pos' from start		
		LinkedList& operator= (const ComplexInteger array[]); // Member function
		friend LinkedList& operator>> (const LinkedList& l, int val); //Right shift
		friend LinkedList& operator<< (const LinkedList& l, int val); //Left Shift
		bool operator% (const ComplexInteger& c); // % is Search operator
		void printList() const;
		//bool isPresent(const ComplexInteger& c); //Search function
		
		int getLength() const{return length;}
		void setLength(int l) { length = l; }
		friend class Node;
};
class Node
{
	public:
		ComplexInteger number;
		Node *next;
		Node(ComplexInteger data);
		//Node(ComplexInteger& data);
		void printNode();
		ComplexInteger getNumber() const{
			return number;
		}

		friend class LinkedList;
};

class PositionNotFoundException
{
	/*private:
		char *err_msg;*/
	public:
		//PositionNotFoundException(std::string msg);
		//PositionNotFoundException(char* msg) { err_msg = new char[strlen(msg)+1]; strcpy(err_msg, msg); }
		//~PositionNotFoundException() { delete[] err_msg; }
		void printErrorMessage() const;
	
};


void PositionNotFoundException::printErrorMessage() const { std::cout<< "Position invalid!!\n"; }
