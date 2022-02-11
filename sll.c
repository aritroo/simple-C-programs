#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp,*prevnode,*nextnode;

void display()
{
	temp=head;
	while(temp->next!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}

void create()
{
//    int choice;

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

    //    printf("\n Do you want to continue ?(1 for yes and 0 for no)");
      //  scanf("%d",&choice);


}

void insertAtbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data you want to insert at begining of the list : ");
    scanf("%d",&newnode->data);

    if(head==NULL)
    {
	head=newnode;
    }
    else
    {
	newnode->next=head;
	head=newnode;
    }
}

void insertAtend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data you want to insert at the end of the list : ");
    scanf("%d",&newnode->data);

    if(head==NULL)
    {
	head=newnode;
    }
    else
    {
	newnode->next=0;
	temp=head;

	while(temp->next!=0)
	{
	    temp=temp->next;
	}
	temp->next=newnode;

    }
}

void insertpos()
{
    int pos,i=1;

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data you want to insert : ");
    scanf("%d",&newnode->data);

    printf("\n Enter the position : ");
    scanf("%d",&pos);

    temp=head;

    while(i<pos)
    {
	temp=temp->next;
	i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    printf("\n The given node is inserted at the given position .\n");
}

void main()
{
    int ch;
    clrscr();
    while(ch!=6)
    {
	printf("1.Create.\n2.Insert at Begining of the list.\n3.Insert at given postion.\n4. Insert at End of the list.\n5.Display.\n6.Exit.\n");
	printf("Enter choice : \n");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1: create();
	    break;

	    case 2: insertAtbeg();
	    break;

	    case 3: insertpos();
	    break;

	    case 4: insertAtend();
	    break;

	    case 5: display();
	    break;

	    case 6: exit(0);
	    break;

	    default: printf("invalid choice");
	}
    }
}

