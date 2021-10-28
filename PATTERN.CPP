#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,j;
    for(i=1;i<=10;++i)
    {
      cout<<"\n";
      for(j=1;j<=i;++j)
        cout<<"+";
    }
    getch();
}
