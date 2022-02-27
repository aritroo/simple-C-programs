#include<stdio.h>
#include<conio.h>
#define MAX 5

int stack[MAX],top=-1;
void push();
void pop();
void display();

void main()
{
    int ch;

    do
    {
        printf("\n---------MENU----------\n");
        printf("\n1.PUSH.\n2.POP.\n3.DISPLAY.\n4.EXIT.");

        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: display();
            break;

            case 4: printf("Exiting!!!.......!!!!!");
            break;

            default: printf("\n INVALID CHOICE ......");
        }
        
    } while (ch!=4);
}

void push()
{
    int x;

    if(top==MAX-1)
    {
        printf("\n STACK IS FULL.");
    }
    else
    {
        printf("\n Enter the element to be inserted inside the stack : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int n;

    if(top==-1)
    {
        printf("\n Stack is Empty.");
    }
    else
    {
        n=stack[top];
        printf("\n %d is popped from the stack .",n);
        top--;
    }
}
void display()
{
    int i;
    printf("\n The elements present inside the stack is : ");
    for(i=0;i<=top;i++)
    {
        printf(" %d",stack[i]);
    }
}
