#include<stdio.h>
#include<stdlib.h>
#define stack_size 6

int Top=-1,stack[stack_size];
void Push();
void Pop();
void Display();
 
int main()
{
	int ch;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Display\n4.Exit");
		printf("\n\nEnter the choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: Display();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 
void Push()
{
	int x;
	
	if(Top==stack_size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		stack[Top]=x;
	}
	printf("The %d number is inserted",stack[Top]); 
}
 
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",stack[Top]);
		Top=Top-1;
	}
}
 
void Display()
{
	
	
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
