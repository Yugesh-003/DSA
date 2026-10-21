#include<iostream.h>
#include<conio.h>
class Stack
{
public:
int MAX_SIZE;
int top,st[];
stack()
{
MAX_SIZE=5;
top=-1;
st[MAX_SIZE];
}
void push()
{
int value;
cout<<"Enter the value for stack";
cin>>value;
if(top==MAX_SIZE-1)
{
cout<<"\nStack is over flow";
}
else
{
top=top+1;
st[++top]=value;
}
}
void pop()
{
if(top==-1)
{
cout<<"\nStack is empty";
}
else
{
cout<<"\ndeleted element is"<<st[top];
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
cout<<"\nStack is empty";
}
else
{
for(i=top;i>=0;i--)
{
cout<<"st[i]"<<"\n";
}
}
}
void peek()
{
if(top==-1)
{
cout<<"\nstack is empty";
}
else
{
cout<<"top of the element"<<st[top];
}
}
};
void main()
{
clrscr();
stack s;
s.push();
s.push();
s.pop();
s.display();
s.peek();
getch();
}
