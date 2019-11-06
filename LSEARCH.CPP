#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[20],size,i,flag=0,num,pos;
cout<<"Enter the numer of elements in the array:";
cin>>size;
cout<<"\nEnter the elements of the array(in ascending order):";
for(i=0;i<size;i++)
cin>>a[i];
cout<<"\nEnter the element to be searched for:";
cin>>num;
for(i=0;i<size;i++)
if(a[i]==num)
{flag=1;
pos=i;
break;
}
if(flag==0)
cout<<"\nElement not found!!";
else
cout<<"\Element found at position "<<(pos+1);
getch();
}