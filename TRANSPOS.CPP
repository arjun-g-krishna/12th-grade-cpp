#include<iostream.h>
#include<conio.h>
void main()
{int a[10][10],b[10][10],m,n;
clrscr();
cout<<"Enter the number of rows:";
cin>>m;
cout<<"Enter the number of columns:";
cin>>n;
cout<<"Enter the matrix:\n";
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
b[i][j]=a[j][i];
cout<<"\nThe matrix in matrix form"<<endl;
for(i=0;i<m;i++)
{cout<<"\n";
for(int j=0;j<n;j++)
{cout<<a[i][j]<<" ";}
}
cout<<"\nThe transpose is"<<endl;
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<n;j++)
{cout<<b[i][j]<<" ";}
}
getch();
}