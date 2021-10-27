#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float first,second,third,n;
  first=0;
  second=1;
  cout<<"How many terms to display ?";
  cin>>n;
  if(n==0)
    cout<<"\nNothing to display!";
  else if(n==1)
   cout<<"0";
  else
  {
  cout<<"\nFibonacci Series";
  cout<<"\n"<<first<<"\n"<<second;
  for(int i=2;i<=n;++i)
    {
       third=first+second;
       cout<<"\n"<<third;
       first=second;
       second=third;
    }
  }
  getch();
}
