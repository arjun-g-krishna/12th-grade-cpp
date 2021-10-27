#include<iostream.h>
#include<conio.h>
void swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
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
