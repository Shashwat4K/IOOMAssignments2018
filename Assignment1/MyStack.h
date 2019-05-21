// Header file containing structure definitions and function definitions

typedef enum {FALSE, TRUE} BOOL;

typedef struct{
	int P_ID;
	int QUANT;
	char ITEM_LABEL[10];
}PRODUCT;

typedef struct list{
	PRODUCT P;
	struct list *next;
}LIST_NODE;

typedef struct stack{
	LIST_NODE *TOP;
}STACK;

// Function declarations
void Menu();
void initStack(STACK *S);
LIST_NODE* newNode(PRODUCT data);
void push(STACK *S, PRODUCT input);
PRODUCT pop(STACK *S);
PRODUCT peek(STACK *S);
BOOL isEmpty(STACK *S);
BOOL isNull(PRODUCT p);
PRODUCT getNode();
void printNode(PRODUCT p);
void printStack(STACK *S);
void sortedInsert(STACK *S, PRODUCT x);
void sortStack(STACK *S);
LIST_NODE* getMid(LIST_NODE *head);
PRODUCT deleteMid(STACK *S);
