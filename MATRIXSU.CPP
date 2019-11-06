#include<iostrexam.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int i,j,m,n,p,q;
cout<<"\nInput row and column of matrix A";
cin>>m>>n;
cout<<"\nInput row and column of matrix B";
cin>>p>>q;
if(m==p&&n==q)
cout<<"\nMatrix can be added";
else
exit(0);
cout<<"\nInput matrix A";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
cout<<"\nInput matrix B";
for(i=0;i<p;i++)
for(j=0;j<q;j++)
cin>>b[i][j];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
cout<<"\nSum is";
for(i=0;i<m;i++)
{cout<<"\n";
for(j=0;j<n;j++)
 {cout<<" ";
  cout<<c[i][j];
 }
}
getch();
}