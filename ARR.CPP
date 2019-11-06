#include<iostream.h>
#include<conio.h>
int findpos(int[],int,int);
void main()
{clrscr();
int ar[50],item,n,index;
cout<<"How many elements do you want to create array with..?";
cin>>n;
cout<<"Enter array elements in ascending order:";
for(int i=0;i<n;i++)
cin>>ar[i];
char ch='y';
while(ch=='y'||ch=='Y')
{cout<<"Enter the element to be inserted:";
cin>>item;
index=findpos(ar,n,item);
for(int j=n;j>index;j--)
{ar[j]=ar[j-1];
}
ar[index]=item;
n+=1;
cout<<"Want to insert more elements?\nEnter y for yes or n for no:";
cin>>ch;
}
cout<<"The array is now as shown below\n";
for(int k=0;k<n;k++)
cout<<ar[k]<<" ";
getch();
}
int findpos(int ar[],int size,int item)
{int pos;
if(item<ar[0])pos=0;
else{
for(int i=0;i<size-1;i++)
{if(ar[i]<=item&&item<ar[i+1])
  {pos=i+1; break;
  }
}if(i==size-1)pos=size;
}
return pos;
}