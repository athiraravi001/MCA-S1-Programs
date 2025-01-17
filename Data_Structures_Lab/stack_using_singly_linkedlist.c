#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void search();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

void main()
{
int opt;
do
{
printf("\n\nChoose operation : \n 1 : PUSH\n 2 : POP\n 3 : DISPLAY\n 4 : SEARCH\n 5 : EXIT\n");
printf("\nEnter your choice : ");
scanf("%d",&opt);
switch(opt)
{
case 1 : printf("PUSH\n");
         push();
         break;
case 2 : printf("POP\n");
         pop();
         break;
case 3 : printf("DISPLAY\n");
         display();
         break;
case 4 : printf("SEARCH\n");
         search();
         break;
case 5 : printf("EXITED\n");
         exit(0);
}
}
while(opt!=5);
}

//PUSH

void push()
{
    struct node *new;
    int x;
    printf("Enter element to push : ");
    scanf("%d",&x);
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Stack Overflow");
        return;
    }
    new->data=x;
    new->next=top;
    top=new;
}

//POP

void pop()
{
    struct node *ptr;
    if(top==NULL)
    {
        printf("Stack Empty");
        return;
    }
    printf("%d is popped\n",top->data);
    ptr=top;
    top=top->next;
    free(ptr);
}

//SEARCH

void search()
{
    struct node *ptr;
    int x;
    printf("Enter the element to search : ");
    scanf("%d",&x);
    if(top==NULL)
    {
        printf("Stack Empty");
        return;
    }
    else
    {
        ptr=top;
        while(ptr!=NULL)
        {
            if(ptr->data==x)
            {
                printf("Element Found");
                break;
            }
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            printf("Element not found");
        }
    }
}

//DISPLAY

void display()
{
    struct node *ptr;
    if(top==NULL)
    {
        printf("Stack Empty");
        return;
    }
    else
    {
        ptr=top;
        while(ptr!=NULL)
        {  
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}
