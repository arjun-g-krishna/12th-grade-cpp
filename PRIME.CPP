#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag;
clrscr();
printf("Enter a positive integer:");
scanf("%d",&n);
if(n==1)
	printf("Neither prime nor composite");
else
{
flag=1;
for(i=2;i<=(n/2);i++)
{
if(n%i==0)
	{
	 flag=0;
	 break;
	}
}
if(flag==1)
	printf("Prime number.");
else
	printf("Composite");
}
getch();
}

