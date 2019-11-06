#include<iostream.h>
#include<conio.h>
#include<limits.h>
void inssort(int[],int);
void main()
{clrscr();
int ar[50],item,n,index;
char ch='y';
while(ch=='y'||ch=='Y')
{clrscr();
cout<<"How many elements do you want to create the array with?:";
cin>>n;
cout<<"Enter the array elements:";
for(int i=1;i<=n;i++)
cin>>ar[i];
inssort(ar,n);
cout<<"The sorted array is as shown below:\n";
for(i=1;i<=n;i++)
cout<<ar[i]<<" ";
cout<<"\nWant to sort more arrays?\nEnter y for yes or n for no:";
cin>>ch;
};
getch();
}
void inssort(int ar[],int size)
{int temp,j;
ar[0]=INT_MIN;
for(int i=1;i<=size;i++)
{temp=ar[i];
j=i-1;
while(temp<ar[j])
{ar[j+1]=ar[j];
j--;
}
ar[j+1]=temp;
cout<<"The array after pass "<<i<<" is:";
for(int k=1;k<=size;k++)
cout<<ar[k]<<" ";
cout<<"\n";
}
}