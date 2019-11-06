#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{clrscr();
ofstream fout;
fout.open("marks.dat",ios::out);
char ans='y';
int rollno;float marks;
while(ans=='y'||ans=='Y')
{cout<<"Enter roll no.";
cin>>rollno;
cout<<"Enter marks";
cin>>marks;
fout<<rollno<<"\n"<<marks<<"\n";
cout<<"want to enter more records??(y/n)";
cin>>ans;
}
fout.close();
}