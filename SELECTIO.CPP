#include<iostream.h>
#include<conio.h>
void selsort(int[],int);//Function for performing selection sort
void main()
{int ar[50],n;
clrscr();
cout<<"How many elements do you want to create\nthe array with?(max 50):";
cin>>n;
cout<<"Enter the array elements:";
for(int i=0;i<n;i++)
cin>>ar[i];
selsort(ar,n);
cout<<"\nThe sorted array is as shown below:\n";
for(int j=0;j<n;j++)
cout<<ar[j]<<" ";
getch();
}
void selsort(int ar[],int size)
{
int small,pos,temp;
for(int i=0;i<size-1;i++)
{small=ar[i];
 pos=i;
 for(int j=i+1;j<size;j++)
 {if(ar[j]<small)
  {small=ar[j];
   pos=j;
   }
 }
 temp=ar[i];
 ar[i]=ar[pos];
 ar[pos]=temp;
 cout<<"\nThe array after pass "<<i+1<<" is:";
 for(int k=0;k<size;k++)
 cout<<ar[k]<<" ";
 }
}
