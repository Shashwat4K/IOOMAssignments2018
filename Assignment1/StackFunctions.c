void Menu()
{
	printf("1. Push on the stack\n");
	printf("2. Pop from the stack\n");
	printf("3. Print the stack\n");
	printf("4. Sort the stack\n");
	printf("5. Delete the middle node\n");
	printf("0. Exit\n");
	printf("Your choice:  ");
}

void initStack(STACK *S)
{
	S->TOP = NULL;
}

LIST_NODE* newNode(PRODUCT data)
{
	LIST_NODE *ptr;
	ptr = (LIST_NODE*)malloc(sizeof(LIST_NODE));
	ptr->P = data;
	ptr->next = NULL;
	return ptr;
}
void push(STACK *S, PRODUCT input)
{
	LIST_NODE *node;
	node = newNode(input);
	node->next = S->TOP;
	S->TOP = node;
}

PRODUCT peek(STACK *S)
{
	return (S->TOP->P);
}

PRODUCT pop(STACK *S)
{
	PRODUCT p;
	if(isEmpty(S))
	{
		p.ITEM_LABEL[0] = '\0';
		p.P_ID = -1;
		p.QUANT = -1;
	}
	else
	{
		LIST_NODE *ptr;
		ptr = S->TOP;
		S->TOP = (S->TOP)->next;
		p = ptr->P;
		free(ptr);
	}
	return p;
}

BOOL isEmpty(STACK *S)
{
	BOOL retval = FALSE;
	if(S->TOP == NULL){
		retval = TRUE;
	}
	return retval;
}

BOOL isNull(PRODUCT p)
{
	BOOL retval = FALSE;
	if(p.ITEM_LABEL[0] == '\0' && p.P_ID == -1 && p.QUANT == -1)
	{
		retval = TRUE;
	}
	return retval;
}

PRODUCT getNode()
{
	PRODUCT p;
	printf("Product Name: ");
	scanf("%s",p.ITEM_LABEL);
	printf("\nProduct ID: ");
	scanf("%d",&p.P_ID);
	printf("\nProduct Quantity: ");
	scanf("%d",&p.QUANT);
	return p;
}

void printNode(PRODUCT p)
{
	printf("Product-ID: %d\n", p.P_ID);
	printf("Product-Name: %s\n",p.ITEM_LABEL);
	printf("Quantity: %d\n",p.QUANT);
	printf("**************************************\n\n"); 
}

void printStack(STACK *S)
{
	LIST_NODE *ptr;
	int i = 1;
	if(S->TOP == NULL){
		printf("Stack is empty!!!\n");
	}else{
		printf("Stack contents (from top to bottom) are: \n\n");
		ptr = S->TOP;
		while(ptr!=NULL)
		{
			printf("Product No. %d.\n",i++);
			printNode(ptr->P);
			ptr = ptr->next;
		}
	}
}
