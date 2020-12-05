#include<stdio.h>
#include<conio.h>
int top,s[100],n,choice;
void push();
void pop();
void display();
void main()
{
top=-1;
n=5;
//int choice;
       while(1)
	{
	printf("\n size of array is 5 ");
	//scanf("%d",&n);
	printf("\n\n1.Push \n2.Pop \n3.Display \n4.Exit");
	printf("\n\nEnter your choice(1-4):");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 4: exit(0);

		default: printf("\n!!Invalid Choice!!");
	}
	}
}

void push()
{
int x;

	if(top>=n-1)
	{
		printf("\nStack is overflow!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&x);
		top++;
		s[top]=x;
	}
}
 
void pop()
{
	if(top<=-1)
	{
		printf("\nStack is underflow!!");
	}
	else
	{
		printf("\nDeleted element is %d",s[top]);
		top--;
	}
}
 
void display()
{
	int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\n Elements in the Stack is...\n");
		for(i=top;i>=0;i--)
			printf("\n%d",s[i]);
	}
}