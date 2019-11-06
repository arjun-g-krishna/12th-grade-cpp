#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c;
float root1,root2;
cout<<"Enter the values of a,b and c in ax^2+bx+c=0:";
cin>>a>>b>>c;
root1=(-b+(sqrt((b*b))-(4*a*c))/(2*a));
root2=(-b-(sqrt((b*b))-(4*a*c))/(2*a));
if(a==0)
{cout<<"The value of a cannot be zero.";}
else
{cout<<"The roots are"<<root1<<"and"<<root2<<".";}
getch();
}