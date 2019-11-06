#include<iostream.h>
#include<process.h>
#include<conio.h>
struct node
{int info;
node *next;
}*front,*rear,*newptr,*save,*ptr;
node *create(int);
void insertend(node*);
void display(node*);
void main()
{clrscr();
front=rear=NULL;
int inf;
char ch='y';
while(ch=='y'||ch=='Y')
{cout<<"Enter the information for new node:";
cin>>inf;
newptr=create(inf);
if(newptr==NULL){cout<<"Cannot create new node";
		exit(0);}
insertend(newptr);
cout<<"Now the queue (front to rear) is\n";
display(front);
cout<<"\nPress y to enter more nodes n to exit:";
cin>>ch;
}delete newptr;
getch();
}
node *create(int n)
{node *ptr;
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void display(node *np)
{while(np!=NULL)
 {cout<<np->info<<"->";
  np=np->next;
 }
cout<<"\n";
}
void insertend(node *np)
{if(front==NULL)front=rear=np;
else{rear->next=np;
     rear=np;}
}
