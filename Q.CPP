#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{int info;
node *next;
}*front,*rear,*newptr,*save,*ptr;
node *create(int);
void insert(node *);
void display(node *);
void main()
{clrscr();
front=rear=NULL;
int inf;
char ch='y';
while(ch=='y'||ch=='Y')
{cout<<"Enter the Info for new node..";
cin>>inf;
newptr=create(inf);
if(newptr==NULL){cout<<"Cannot create new node...!!";
		 exit(0);}
insert(newptr);
cout<<"Now the Queue is";
display(front);
cout<<"Press Y to enter more nodes,or N to exit..";
cin>>ch;
}getch();
}
node *create(int n)
{ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void insert(node *np)
{
if(front==NULL)
front=rear=np;
else{rear->next=np;
     rear=np;
    }
}
void display(node *np)
{while(np!=NULL)
 {cout<<np->info<<"->";
  np=np->next;
 }
cout<<"\n";
}

