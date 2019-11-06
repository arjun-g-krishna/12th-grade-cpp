#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class student
{int rno;
int class_;
int marks;
char name[20];
public:
void input();
void display();
int getrno()
{return rno;}
}s;
void student::input()
{
cout<<"\n\nEnter name:";
gets(name);
cout<<"Enter class:";
cin>>class_;
cout<<"Enter roll number:";
cin>>rno;
cout<<"Enter marks:";
cin>>marks;
}
void student::display()
{
cout<<"\n\nName:";
puts(name);
cout<<"Class:"<<class_;
cout<<"\nRoll number:"<<rno;
cout<<"\nMarks:"<<marks;
}
void main()
{clrscr();
ofstream fout("student.dat",ios::out);
for(int i=0;i<5;i++)//Default 5 students.Change the number from five to more if you wish
{cout<<"\n\nEnter details of student "<<i+1;
s.input();
fout.write((char*)&s,sizeof(s));
}
fout.close();
ifstream fin("student.dat",ios::in);
cout<<"\nEntered detais:"<<endl;
for(int j=0;j<5;j++)//Change the number here too the same number of times as the above for loop
{fin.read((char*)&s,sizeof(s));
s.display();
}
fin.close();
getch();
}