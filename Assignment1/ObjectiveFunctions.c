void sortedInsert(STACK *S, PRODUCT x)
{
	if(isEmpty(S) || x.QUANT > peek(S).QUANT)
	{
		push(S, x);
	}
	else
	{
	    PRODUCT temp = pop(S);
	    sortedInsert(S, x);
	    push(S, temp);
	}
}
void sortStack(STACK *S)
{
	if(!isEmpty(S)){
		PRODUCT popped = pop(S);
		sortStack(S);
		sortedInsert(S, popped);
	}
}

LIST_NODE* getMid(LIST_NODE *head)
{
	LIST_NODE *slow,*fast,*slow_prev;
	slow_prev = NULL;
	slow = head;
	fast = head;
	if(head != NULL)
	{
		while(fast!=NULL && fast->next!=NULL)
		{
			slow_prev = slow;
			slow = slow->next;
			fast = fast->next->next;
		}
	}
	return slow_prev;
}

PRODUCT deleteMid(STACK *S)
{
	PRODUCT retrieved;
	LIST_NODE *midPrev,*temp;
	midPrev = getMid(S->TOP);
	
	if(midPrev != NULL)
	{
		temp = midPrev->next;
		midPrev->next=temp->next;
		retrieved = temp->P;	
		temp->next = NULL;
		free(temp);
	}
    else 
    {
    	retrieved = pop(S);
	}
	return retrieved;
}
