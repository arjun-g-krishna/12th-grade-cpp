#include<iostream.h>
#include<conio.h>
#include<stdlib .h>
void main()
{
clrscr();
double a,i;
char ch;
do{clrscr();
cout<<"\t""\t""\t""   Multiplication table";
cout<<"\n""Enter the number:";
cin>>a;
for (i=1;i<21;++i)
cout<<"\n"<<a<<"x"<<i<<"="<<(i*a);
cout<<"\n\nWant to enter more?(y/n)";
cin>>ch;
}while(ch=='Y'||ch=='y');
if(ch=='n'||ch=='N')
exit(0);
getch();
}