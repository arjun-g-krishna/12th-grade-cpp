#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
clrscr();
char ch,ch1;
float l,b,peri,diag,area;
do{
clrscr();
cout<<"\n\nRectangle Menu";
cout<<"\n1.Area";
cout<<"\n2.Prerimeter";
cout<<"\n3.Diagonal";
cout<<"\n4.Exit";
cout<<"\nEnter your choice(1-4):";
cin>>ch;
if(ch==1||ch==2||ch==3);
cout<<"\nEnter length and breadth:";
cin>>l>>b;
switch(ch)
{
case '1':area=(l*b);
cout<<"Area is "<<area;
break;
case '2':peri=2*(l+b);
cout<<"Perimeter is "<<peri;
break;
case '3':diag=sqrt((l*l)+(b*b));
cout<<"Diagonal is "<<diag;
break;
case '4':cout<<" ";
exit(0);
default:cout<<"Wrong choice!""\n""Enter a valid one";
break;
}
cout<<"\n\nWant to enter more(y/n)?";
cin>>ch1;
}while(ch1=='Y'||ch1=='y');
getch();
}

