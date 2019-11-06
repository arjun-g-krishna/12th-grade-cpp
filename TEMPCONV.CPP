#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int ch;
char choice='y';
double temp;
while(choice=='y'||choice=='Y')
{
clrscr();
cout<<"\t\t\t\tTemperature Conversion Menu";
cout<<"\n1.Fahrenheit to Celsius";
cout<<"\n2.Celsius to Fahrenheit";
cout<<"\nEnter your choice(1 or 2):";
cin>>ch;
if (ch==1||ch==2)cout<<"\nEnter temperature to be converted:";
cin>>temp;
cout<<"Converted temperature is:";
switch(ch)
{case 1:cout<<(temp-32)/1.8;
	break;
 case 2:cout<<(1.8*temp)+32;
	break;
 default:cout<<"Wrong choice!!";
 }
 cout<<"\nWant to enter more..?  Enter y for yes or n for no:";
 cin>>choice;
  };
 getch();
 }