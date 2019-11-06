#include<iostream.h>
#include<conio.h>
int bsearch(int[],int,int);
void main()
{
clrscr();
int ar[50],item,n,index;
cout<<"Enter the size of the array:";
cin>>n;
cout<<"Enter array elements in ascending order:";
for(int i=0;i<n;i++)
{cin>>ar[i];
}
cout<<"Enter the element to be searched for:";
cin>>item;
index=bsearch(ar,n,item);
if(index==-1)
cout<<"Sorry Element not found";
else{
cout<<"Element found at index "<<index<<" Position "<<index+1;
}
getch();
}
int bsearch(int ar[],int size,int item)
{
int beg,mid,last;
beg=0;
last=size-1;
while(beg<=last)
{
mid=(beg+last)/2;
if(item==ar[mid])
return mid;
else if(item>ar[mid])
beg=mid+1;
else last=mid-1;
}return -1;
}
