#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp,*prevnode,*nextnode;
head=NULL;

void create()
{   
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the Data : ");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

        printf("\n Do you want to continue ?(1 for yes and 0 for no)");
        scanf("%d",&choice);
    }
    
}

void insertAtbeg()
{
    
}
