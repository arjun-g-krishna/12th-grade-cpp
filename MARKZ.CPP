#include<iostream.h>
#include<conio.h>
int *r,*m;
void main()
{clrscr();
int size;
cout<<"Enter the number of students:";
cin>>size;
r=new int[size];
m=new int[size];
for(int i=0;i<size;i++)
{cout<<"Student "<<i+1;
cout<<"\nEnter Roll number:";
cin>>r[i];
cout<<"Enter marks:";
cin>>m[i];
}
cout<<"\nENTERED DETAILS\n";
for(int j=0;j<size;j++)
{cout<<"\nStudent "<<j+1;
cout<<"\nRoll number:"<<r[j];
cout<<"\nMarks:"<<m[j];
}
getch();
}