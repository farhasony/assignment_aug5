#include<stdio.h>
#include<stdlib.h>
struct node 
{
char ch[5];
struct node *link;
};
struct node* addbeg(struct node*);
void print(struct node*);
int main()
{
struct node *head=NULL;
int choice;
while(1)
{
printf("1.addbeg 2.print 3.exit\n");
printf("enter ur choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:head=addbeg(head);
       break;
case 2:print(head);
        break;
case 3:exit(0);
        default :printf("invalid choice\n");
        }
        }
        }
struct node* addbeg(struct node *ptr)
        {
        char ch;
       // char ch[10]={'a','e','i','o','u'};
        struct node *newnode=NULL,*temp=NULL;
        newnode=calloc(1,sizeof(struct node));
        if(newnode==NULL)
        {
        printf("node not created\n");
        }
        else
        {
        printf("enter char\n");
        scanf("%s",newnode->ch);
        
  if(ptr==NULL)
      {
        ptr=newnode;
        newnode->link=ptr;
        }
        else
        {
        for(temp=ptr;temp->link!=ptr;temp=temp->link);
        temp->link=newnode;
        newnode->link=ptr;
        }
        }
       
       
        return ptr;
        }
        
 void print(struct node *ptr)
        {
        struct node *temp=NULL;
        
        if(ptr==NULL)
        {
        printf("sll is empty\n");
        }
        else
        {
        temp=ptr;
        
        do{
        printf("%s\n",temp->ch);
        temp=temp->link;
        }while(temp!=ptr);
        }
        }
        
