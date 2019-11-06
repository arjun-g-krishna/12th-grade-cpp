#include<iostream.h>
#include<conio.h>
void selsort(int[],int);
void main()
{clrscr();
int ar[50],item,n;
cout<<"How many elements do you want to create an array with..?:";
cin>>n;
cout<<"Enter the array elements:\n";
for(int i=0;i<n;i++)
cin>>ar[i];
selsort(ar,n);
cout<<"\nThe sorted array is as shown below:\n";
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
cout<<"\n";
getch();
}
void selsort(int ar[],int size)
{
int small,pos,tmp;
for(int i=0;i<size-1;i++)
{small=ar[i];
 pos=i;
 for(int j=i+1;j<size;j++)
  {if(ar[j]<small)
     {small=ar[j];
      pos=j;}
  }
 tmp=ar[i];
 ar[i]=ar[pos];
 ar[pos]=tmp;
 cout<<"\nThe array after pass "<<i+1<<"is:  ";
 for(int k=0;k<size;k++)cout<<ar[k]<<" ";
}
}