#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class resort
{int rno;
char name[15];
float charges;
float days;
float amount;
float compute();
public:
void getinfo();
void dispinfo();
}r;
float resort::compute()
{int am;
 am=days*charges;
 if(am>1100){return 1.02*days*charges;}
 else {return am;}
}
void resort::getinfo()
{cout<<"Enter Room number:";
cin>>rno;
cout<<"Enter the name:";
gets(name);
cout<<"Enter per day charges:";
cin>>charges;
cout<<"Enter the number of days:";
cin>>days;
}
void resort::dispinfo()
{cout<<"\n\n\n\n			DETAILS\n";
cout<<"Room number:"<<rno;
cout<<"\nName:";
puts(name);
cout<<"Charges per day:"<<charges;
cout<<"\nNumber of days:"<<days;
amount=compute();
cout<<"\nAmount"<<amount;
}
void main()
{clrscr();
r.getinfo();
r.dispinfo();
getch();
}
