#include<iostream.h>
#include<conio.h>
class queue
{
public:
const int MAX_SIZE;
int front,rear,qu[];
queue()
{
MAX_SIZE;
qu[MAX_SIZE];
front=-1;
rear=-1;
}
void enqueue()
{
int value;
if(rear==MAX_SIZE-1)
{
cout<<"Queue is full";
}
else
{
cout<<"Enter the value for queue:";
cin>>value;
if(front==-1)
{
front=0;
}
rear=rear+1;
qu[rear]=value;
}
}
void dequeue()
{
if(front==-1&front>rear)
{
cout<<"Queue is empty";
}
else
{
cout<<"\nDeleted element is:"<<qu[front];
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
{
cout<<"Queue is empty";
}
else
{
cout<<"\nElement is queue are:";
for(i=front;i<=rear;i++)
{
cout<<qu[i]<<"\t";
}
}
}
};
void main()
{
clrscr();
queue q;
q.enqueue();
q.enqueue();
q.dequeue();
q.display();
getch();
}

