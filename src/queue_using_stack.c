#include "../include/stack.h"

void print_queue()
{

	if(stack1.top == NULL 
		&& stack2.top == NULL)
	{
		printf("\nQueue is empty\n");
		return ;
	}

	struct node *temp = NULL;
	temp = stack2.top;

	if(temp != NULL)
		do
			printf("%d ",temp->data);
		while((temp = (temp->next)));

	temp = stack1.top;

	stack temp_stack;
	temp_stack = init(temp_stack);

	if(temp != NULL)
		do
			temp_stack = push(temp_stack,temp->data);
		while((temp = (temp->next)));

	temp = temp_stack.top;

	if(temp != NULL)
		do
			printf("%d ",temp->data);
		while((temp = (temp->next)));
}

int dequeue()
{
	if(stack2.top != NULL)
		return pop(&stack2);

	if(stack1.top == NULL)
		return INT_MIN;

	int data;

	while(stack1.top != NULL)
	{
		data = pop(&stack1);
		stack2 = push(stack2,data);
	}
	return pop(&stack2);
}