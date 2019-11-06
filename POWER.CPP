#include<iostream.h>
#include<conio.h>
float powr(float a,int n)
{
int t=1;
for(int i=1;i<=n;i++)
{t*=a;
a*a;
}
return t;
}

void main()
{clrscr();
int y,x;
cout<<"Enter the number:";
cin>>y;
cout<<"Enter the power to which it should be raised:";
cin>>x;
cout<<"The answer is "<<powr(y,x);
getch();
}