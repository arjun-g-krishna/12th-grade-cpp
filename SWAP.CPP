#include<iostream.h>
#include<conio.h>
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"x="<<a<<"\n"<<"y="<<b;
}
void main()
{
clrscr();
int x,y;
cout<<"Enter the values of x and y:";
cin>>x>>y;
cout<<"Values after swap are\n";
swap(x,y);
getch();
}