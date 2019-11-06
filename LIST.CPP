#include<iostream.h>
#include<conio.h>
struct node
{
int info;
node *next;
}*newptr,*front,*ptr,*rear;
node *create_new_node(int);
void insert_beg(node*);
void display(node*);
void main()
{clrscr();
int inf;
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"\nEnter information for new node:";
cin>>inf;
newptr=create_new_node(inf);
cout<<"Now inserting this node to the beginning of the list..\n";
insert_beg(newptr);
cout<<"\nNow the queue (front to rear is):\n";
display(front);
cout<<"\nWant to enter more nodes?\nEnter y for yes or n for no:";
cin>>ch;
}
delete newptr;
getch();
}
node *create_new_node(int n)
{
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void insert_beg(node *np)
{
if(front==NULL){front=rear=np;}
else{rear->next=np;
     rear=np;}
}
void display(node *np)
{
while(np!=NULL)
{cout<<np->info<<"->";
np=np->next;
}
}