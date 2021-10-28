#include<iostream.h>
#include<conio.h>
void main()
{
  char ch;
  do
  {
      clrscr();
      double i,num,fact=1;
      cout<<"\nFactorial of which number?";
      cin>>num;
      i=num;
      while(num)
      {
        fact*=num;
         --num;
      }
      cout<<"The factorial of "<<i<<" is "<<fact<<".";
      cout<<"\nDo u Want to Continue?(y/n)";
      cin>>ch;
  }while (ch=='Y'||ch=='y');
  getch();
}
