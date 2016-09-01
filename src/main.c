#include <stdio.h>
#include "../include/stack.h"

stack stack1,stack2;

void print_queue();
int dequeue();

int main()
{
	stack1 = init(stack1);
	stack2 = init(stack2);

	int choice,data;

	while(1)
	{
		printf("\n[1].Enter a new element (enqueue)\n");
		printf("[2].Delete an element (dequeue)\n");
		printf("[3].Print the queue\n");
		printf("[4].Exit\n");

		printf("Enter your choice :\t");
		scanf("%d",&choice);

		if(choice == 1)
		{
			printf("\nEnter the data for new element :\t");
			scanf("%d",&data);
			stack1 = push(stack1,data);
		}
		else if(choice == 2)
		{
			data = dequeue();
			if(data != INT_MIN)
				printf("\nThe deleted element is :\t%d\n",data);
			else
				printf("\nQueue is empty\n");
		}
		else if(choice == 3)
			print_queue();
		else
			break;
	}

	return 0;
}

