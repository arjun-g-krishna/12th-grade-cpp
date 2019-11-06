#include<iostream.h>
#include<conio.h>
#include<process.h>
int findpos(int[],int,int);
void main()
{int ar[50],item,n,index;
clrscr();
cout<<"How many elements do you\nwant to create an array with..?";
cin>>n;
cout<<"Enter the array elements in ascending order..\n";
for(int i=0;i<n;i++)
cin>>ar[i];
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"Enter the element to be inserted..";
cin>>item;
if(n==50){cout<<"Overflow...!!!"; exit(0);}
index=findpos(ar,n,item);
for(i=n;i<index;i--)
{ar[i]=ar[i-1];
}
ar[index]=item;
n+=1;
cout<<"\nWant to insert more ?\nEnter Y for yes N for no:";
cin>>ch;
}
cout<<"The array is now as shown below:";
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
cout<<"\n";
getch();
}
int findpos(int ar[],int size,int item)
{int pos;
if(item<ar[0])
pos=0;
for(int i=0;i<size-1;i++)
{if((ar[i]<=item)&&(item<ar[i+1])){pos=i+1; break;}
if(i==(size-1))pos=size;
}
return pos;
}