/* 
* C program to implement stack that is able to check the condition of underflow and overflow.
* Author : Raman Pandey
* Date : 06/26/2016
* Ref : Data Structure using c and c++
*/

#include<stdio.h>
#include<stdlib.h>
#define MAXITEMS 4
typedef struct{
	int top;
	int items[MAXITEMS];
}stack;
void push(stack *, int);
int pop(stack *);
int main()
{
	stack s;
	s.top = -1;
	push(&s,5);
	push(&s,6);
	push(&s,7);
	push(&s,8);
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	
}
void push(stack *s, int x)
{
	if(s->top == 3)
	{
		printf("stack overflow\n");
		exit(1);
	}
	else
	s->items[++(s->top)] = x;
}
int pop (stack*s)
{
	if (s->top == -1)
	{
		printf("stack underflow");
		exit(1);
	}
	return s->items[s->top--];
}
