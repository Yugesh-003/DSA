#include<iostream.h>
#include<conio.h>
class merge_sort
{
public:
void divide(int elements[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
divide(elements,low,mid);
divide(elements,mid+1,high);
merge(elements,low,mid,high);
}
}
void merge(int elements[],int low,int mid,int high)
{
int i=low,j=mid+1,k=low,temp[20];
while(i<=mid&&j<=high)
{
if(elements[i]<elements[j])
{
temp[k]=elements[i];
k=k+1;
i=i+1;
}
else
{
temp[k]=elements[j];
k=k+1;
j=j+1;
}
}
while(i<=mid)
{
temp[k]=elements[i];
k=k+1;
i=i+1;
}
while(j<=high)
{
temp[k]=elements[j];
k=k+1;
j=j+1;
}
for(i=low;i<=high;i++)
{
elements[i]=temp[i];
}
}
void display(int elements[],int low,int high)
{
int i;
cout<<"sorted elements are";
for(i=low;i<=high;i++)
{
cout<<elements[i]<<"\t";
}
}
};
void main()
{
clrscr();
int elements[20],n,i;
merge_sort ms;
cout<<"Enter the number of elements:";
cin>>n;
cout<<"Enter the elements:";
for(i=0;i<n;i++)
{
cin>>elements[i];
}
ms.divide(elements,0,n-1);
ms.display(elements,0,n-1);
getch();
}
