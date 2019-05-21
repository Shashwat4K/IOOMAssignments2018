#include <stdio.h>
#include <stdlib.h>
#include "MyStack.h"
#include "StackFunctions.c"
#include "ObjectiveFunctions.c"

void main()
{
	STACK myStack;
	PRODUCT data;
	initStack(&myStack);
	int option, flag = 1;
	printf("Enter appropriate option from the menu:\n");
	while(flag == 1){
		Menu();
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("Enter data of product: \n");
				data = getNode();
				push(&myStack, data);
				printf("\n");
				break;
			case 2:
			    data = pop(&myStack);
			    if(isNull(data)){
			    	printf("Data popped from stack is: \n");	
				}
				else{
					printNode(data);
					printf("\n");	
				}
				break;
			case 3:
				printf("\nThe Stack: \n");
				printStack(&myStack);
				printf("\n");
				break;
			case 4:
				printf("\nThe stack in sorted order is: \n");
				sortStack(&myStack);
				printStack(&myStack);
				printf("\n");
				break;
			case 5:
				sortStack(&myStack);
				data = deleteMid(&myStack);
				if(isNull(data)){
					printf("Stack is Empty!!!");
				}else{
					printf("Middle Node was: \n");
					printNode(data);	
				}	
				break;		
			case 0:
				printf("Thank you");
				flag = 0;
				break;			
		}
	}
}
