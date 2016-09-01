#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct list
{
	struct node *top;
	int size;
}stack;


extern stack stack1,stack2;

stack init(stack s);
stack push(stack push,int data);
int pop(stack *s);
void print(stack s);
void flush(stack *s);
#endif