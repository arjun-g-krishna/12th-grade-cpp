#include<iostream.h>
#include<conio.h>
void main()      /*Program to get the marks of
		   ten students using array and
		   display the output*/
{
clrscr();
const int size=10;
int marks[size];
cout<<"\t\t\t\tMarks of ten students";
for(int i=0;i<size;i++)
{cout<<"\nEnter marks of student "<<i+1<<":";
cin>>marks[i];
}
clrscr();
cout<<"\t\t\t\tMARKS";
for(int j=0;j<size;j++)
{cout<<"\nMarks of student "<<j+1<<"="<<marks[j];
}
getch();
}