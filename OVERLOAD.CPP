#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<process.h>
float area(float a)
{return a*a;}
float area(float a,float b)
{return a*b;}
float area(float a,float b,float c)
{float s;
s=(a+b+c)/2;
float ar;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
return ar;
}
void main()
{clrscr();
float a,b,c,ar;
int ch;
char choice='Y';
while(choice=='Y'||choice=='y')
{
clrscr();
cout<<"AREA MENU\n";
cout<<"1.Square\n";
cout<<"2.Rectangle\n";
cout<<"3.Triangle\n";
cout<<"4.Exit\n";
cout<<"Enter Your Choice 1 to 4:";
cin>>ch;
switch(ch)
{case 1:cout<<"Enter the side of the square:";
	cin>>a;
	ar=area(a);
	cout<<"The area is:"<<ar;
	break;
 case 2:cout<<"Enter the length and breadth of the rectangle:";
	cin>>a>>b;
	ar=area(a,b);
	cout<<"The area is:"<<ar;
	break;
 case 3:cout<<"Enter the three sides of the triangle:";
	cin>>a>>b>>c;
	ar=area(a,b,c);
	cout<<"The area is:"<<ar;
	break;
 case 4:exit(0);
 default:cout<<"Wrong Choice...!!!";
	 break;
 };
 cout<<"\n\nWant to enter more..?  Enter Y for yes or N for no:";
 cin>>choice;
 };
 getch();
 }

