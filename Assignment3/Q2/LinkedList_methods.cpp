#include "array_size.h"
Node::Node(ComplexInteger data){
	number = data;
	next = NULL;
}

void Node::printNode()
{
	number.print();
}

LinkedList::LinkedList()
{
	head = NULL; length = 0;
}

LinkedList::~LinkedList()
{
	//std::cout << "In the destructor\n";
	if(head != NULL){
		Node *ptr = head;
		if(ptr->next == NULL)
		{
			delete head;	
		}
		while(ptr!=NULL)
		{
			ptr = ptr->next;
			delete head;
			head = ptr;
		}
	}
}
void LinkedList::insertAtEnd(ComplexInteger c)
{
	Node *newNode = new Node(c);
	Node* p = head;
	if(p == NULL){
		head = newNode;
		length = 1;
	}else{
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = newNode;
		length+=1;
	}
	
}

void LinkedList::deleteAtEnd()
{
	Node* p = head;
        Node *pprev;
	while(p->next != NULL)
	{
		pprev = p;
		p = p->next;
	}
	pprev->next = NULL;
	delete p;
	length--;
}

LinkedList& operator+ (const LinkedList& list, ComplexInteger key) //Removed 'const' and '&' from 'ComplexInteger' object
{
	LinkedList *newList = new LinkedList();
	Node *ptr = list.head;
	Node *nptr = newList->head;
	
	while(ptr != NULL)
	{
		ComplexInteger c = ptr->getNumber();
		Node *newNode = new Node(c);
		if(nptr == NULL)
		{
			newList->head = newNode;
		}
		else
		{
			nptr->next = newNode;
		}
		nptr = newNode;
		ptr = ptr->next;
	}
	Node *node = new Node(key);
	nptr->next = node;
	node->next = NULL;
	newList->setLength(list.getLength()+1);
	return *newList;
}
LinkedList& operator+ (const LinkedList& l1, const LinkedList& l2)
{
	LinkedList *newList = new LinkedList();
	Node *ptr1 = l1.head, *ptr2 = l2.head;
	Node *nptr = newList->head;
	while(ptr1 != NULL)
	{
		ComplexInteger c = ptr1->getNumber();
		Node *newNode = new Node(c);
		if(nptr == NULL)
		{
			newList->head = newNode;
		}
		else
		{
			nptr->next = newNode;
		}
		nptr = newNode;
		ptr1 = ptr1->next;
	}
	while(ptr2 != NULL)
	{
		ComplexInteger c = ptr2->getNumber();
		Node *newNode = new Node(c);
		if(nptr == NULL)
		{
			newList->head = newNode;
		}
		else
		{
			nptr->next = newNode;
		}
		nptr = newNode;
		ptr2 = ptr2->next;
	}
	newList->setLength(l1.getLength() + l2.getLength());
	return *newList;
}

LinkedList& operator- (const LinkedList& list)
{
	LinkedList *newList = new LinkedList();
	Node *ptr = list.head;
	Node *nptr = newList->head;
	while(ptr!=NULL)
	{
		ComplexInteger c = ptr->getNumber();
		Node *newNode = new Node(c);
		if(nptr == NULL){
			newList->head = newNode;
		}else{
			nptr->next = newNode;
		}
		nptr = newNode;
		ptr = ptr->next;
	}
	newList->deleteAtEnd();
	return *newList;
}

LinkedList& operator* (const LinkedList& l, int pos)
{
	pos--;
	LinkedList *newList = new LinkedList();
	Node *ptr = l.head;
	Node *nptr = newList->head;
	int count = 0;
	if(pos > l.getLength() || pos <= 0){
		std::cout << "Invalid position!!\n";
		return *newList;
	}else{
		while(ptr!=NULL)
		{
			ComplexInteger c = ptr->getNumber();
			Node *newNode = new Node(c);
			if(pos == 0){
				// Skipping
				ptr = ptr->next;
			}else{
				if(nptr == NULL){
					newList->head = newNode;
				}else{
					nptr->next = newNode;
				}
				nptr = newNode;
				ptr = ptr->next;
				count++;
			}
			--pos;
		}
		newList->setLength(count);
		return *newList;
	}
	
}

LinkedList& LinkedList::operator= (const ComplexInteger array[])
{
	//int size = array_size; 
	int num_nodes = 0;
	//std::cout << "size = " << array_size << std::endl;
	/*for(int i = 0; i < array_size; i++){
		array[i].print();
	}*/
	Node *nptr = NULL;
	for(int i = array_size-1; i >= 0; i--)
	{
		//std::cout << "\nLOOPING";
		Node *newNode = new Node(array[i]);
		newNode->next = nptr;
		nptr = newNode;
		num_nodes += 1;
	}
	head = nptr;
	setLength(num_nodes);
	return *this;
}

LinkedList& operator<< (const LinkedList& list, int val)
{
	int i = 0;
	int actual_rotations = val % list.getLength();
	Node *ptr1 = list.head, *ptr2 = list.head;
	LinkedList *newList = new LinkedList();
	Node *nptr = newList->head;
	while(i < actual_rotations)
	{
		ptr1 = ptr1->next;
		i++;	
	}
	while(ptr1 != NULL)
	{
		ComplexInteger c = ptr1->getNumber();
		Node *newNode = new Node(c);
		if(nptr == NULL){
			newList->head = newNode;
		}else{
			nptr->next = newNode;
		}
		nptr = newNode;
		ptr1 = ptr1->next;
	}
	while(i > 0)
	{
		ComplexInteger c = ptr2->getNumber();
		Node *newNode = new Node(c);
		nptr->next = newNode;
		nptr = newNode;
		ptr2 = ptr2->next;
		i--;
        }
	return *newList;
}

LinkedList& operator>> (const LinkedList& list, int val)
{
	int i = 0;
	int actual_rotations = val % list.getLength();
	Node *ptr1 = list.head, *ptr2 = list.head;
	LinkedList *newList = new LinkedList();
	Node *nptr = newList->head;
	while(i < (list.getLength() - actual_rotations))
	{
		ptr1 = ptr1->next;
		i++;
	}
	while(ptr1!=NULL)
	{
		ComplexInteger c = ptr1->getNumber();
		Node *newNode = new Node(c);
		if(nptr == NULL){
			newList->head = newNode;
		}else{
			nptr->next = newNode;
		}
		nptr = newNode;
		ptr1 = ptr1->next;
	}
	while( i > 0 )
	{
		ComplexInteger c = ptr2->getNumber();
		Node *newNode = new Node(c);
		nptr->next = newNode;
		nptr = newNode;
		ptr2 = ptr2->next;
		i--;	
	}
	return *newList;
}

bool LinkedList::operator% (const ComplexInteger& c)
{
	bool retval = false;
	int found = 0;
	Node *ptr = head;
	if(ptr == NULL){
		return false;
	}else{
		while(ptr!=NULL && !found){
			if(ptr->getNumber() == c){
				found = 1;
				retval = true;
			}
			ptr = ptr->next;
		}
		if(ptr==NULL && !found){
			retval = false;
		}
		return retval;
	}
}

void LinkedList::printList() const
{
	Node *ptr = head;
	while(ptr!=NULL)
	{
		ptr->printNode(); std::cout << " -> ";
		ptr = ptr->next;
	}
	std::cout << " # ";
}
