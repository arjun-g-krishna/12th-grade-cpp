#include<iostream>
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;++i)
    {
      std::cout<<"\n";
      for(j=1;j<=i;++j)
        std::cout<<"+";
    }
	return 0;
}
