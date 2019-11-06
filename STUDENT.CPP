#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char name[32];
int roll,e,m,p,c,co;
float av;
cout<<"Enter the name of the student:";
cin>>name;
cout<<"\n""Enter the Roll number:";
cin>>roll;
cout<<"\n""Enter the marks in English:";
cin>>e;
cout<<"\n""Enter the marks in Maths:";
cin>>m;
cout<<"\n""Enter the marks in Physics:";
cin>>p;
cout<<"\n""Enter the marks in Chemistry:";
cin>>c;
cout<<"\n""Enter the marks in Computer:";
cin>>co;
av=(e+m+c+co+p)/5;
clrscr();
cout<<"\t\t\t""           Student details";
cout<<"\nName:"<<name;
cout<<"\nRoll number:"<<roll;
cout<<"\nMarks in Maths:"<<m;
cout<<"\nMarks in English:"<<e;
cout<<"\nMarks in Physics:"<<p;
cout<<"\nMarks in Chemistry:"<<c;
cout<<"\nMarks in Computer:"<<co;
cout<<"\nAverage marks:"<<av;
getch();
}

