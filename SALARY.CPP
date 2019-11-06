#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int exper,age,salary;
char name[32];
cout<<"Is the person experienced?";
cout<<"\n""Enter 1 for yes and 0 for no:";
cin>>exper;
cout<<"Enter the name:";
cin>>name;
cout<<"\n""Enter age:";
cin>>age;
salary=(exper)?((age>35)?6000:(age>28)?4800:3000):2000;
cout<<"\nThe salary of "<<name<<" is "<<salary;
getch();
}