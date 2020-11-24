#include<stdio.h>
Int stack[100],choice,n,top,x,I;
Void push();
Void pop();
Void display ();
Void main()
{
top=-1;
Printf("enter the size of array");
Scnaf("%d",$n);
Printf (" array operation");
Printf(" \n 1 .push \n 2.pop \n 3. Display \n 4 exit ");
Do
{
Printf (" enter the option");
Scand("%d",$choice);
}
Switch (choice)
{
Case 1:push();
Break;
Case 2:pop();
Break;
Case 3: display ();
Break;
Case 4: printf(" exit ');
Break
Default:
Printf (" wrong ");
Break;
}
Void push()
{
If(top>=n-1)
{ 
Printf (" stack overflow");
}
Else
{ 
Printf(" enter the value");
Scanf("%d",$x);
Top++;
Stack[top]=x;
}}
Void pop()
{
If(top<=-1)
{
Printf(" stack is under flow");

}
Else
{
Printf(" the poped element is %d",stack[top]);
Top--;
}
}
Void display ()
{
If(top>=0)
{
For(I=top;I>=0;I++)
{
Printf("%d",stack[i]);

}
Else
{
Prints(" stack empty");
}
}}
Getch();
}
