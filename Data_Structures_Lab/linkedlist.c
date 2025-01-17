#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
struct node *head=NULL;
struct node *ptr;

//CREATION OF A LINKED LIST

void create()
{
    int x,n,i;
    struct node *ptr,*new;
    printf("How many node you want in the list : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        if(new==NULL)
        {
            printf("No memory is available");
        }
        printf("Enter the value for the node : ");
        scanf("%d",&x);
        new->data=x;
        new->link=NULL;
        if(head==NULL)
        {
            head=new;
        }
        else
        {
            ptr=head;
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=new;
        }
    }
}

//INSERTION AT BEGINNING

void insertatbeg()
{
    struct node *new;
    int x;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted : ");
    scanf("%d",&x);
    new->data=x;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        new->link=head;
        head=new;
    }
}

//INSERTION AT A SPECIFIC POSITION

void insertatposition()
{
    int x,y;
    struct node *ptr,*new;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted : ");
    scanf("%d",&x);
    new->data=x;
    new->link=NULL;
    printf("Enter the data after which the new node to be inserted : ");
    scanf("%d",&y);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        ptr=head;
        while(ptr->data!=y)
        {
            ptr=ptr->link;
        }
        new->link=ptr->link;
        ptr->link=new;
    }
}

//INSERTION AT END

void insertatend()
{
    int x;
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted : ");
    scanf("%d",&x);
    new->data=x;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=new;
    }
}

//DELETION AT BEGINNING

void deleteatbeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        ptr=head;
        head=ptr->link;
        printf("%d is deleted",ptr->data);
        free(ptr);
    }
}

//DELETION AT A SPECIFIC POSITION

void deleteatposition()
{
    int x;
    struct node *ptr;
    struct node *ptr1;
    printf("Enter the element to be deleted : ");
    scanf("%d",&x);
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        ptr=head;
    }
    while(ptr->data!=x&&ptr->link!=NULL)
    {
        ptr1=ptr;
        ptr=ptr->link;
    }
    if(ptr->data!=x)
    {
        printf("No such element found");
    }
    else if(ptr==head)
    {
        head=ptr->link;
        printf("%d is deleted",ptr->data);
        free(ptr);
    }
    else
    {
        ptr1->link=ptr->link;
        printf("%d is deleted",ptr->data);
        free(ptr);
    }
}

//DELETION AT END

void deleteatend()
{
    struct node *ptr;
    struct node *ptr1;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        ptr=head;
    }
    if(ptr->link==NULL)
    {
        printf("%d is deleted",ptr->data);
        head==NULL;
    }
    else
    {
        while(ptr->link!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->link;
        }
        printf("%d is deleted",ptr->data);
        ptr1->link=NULL;
        free(ptr);
    }
}

//DISPLAY LINKED LIST

void display()
{
    struct node *ptr;
    ptr=head;
    printf("Elements in the list are ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}

//********************************************************************************

void main()
{
int ch;
do
{
printf("\n\nLINKEDLIST OPERATIONS\n1 : CREATE\n2 : INSERTION AT BEGINNING\n3 : INSERTION AT A SPECIFIC POSITION\n4 : INSERTION AT END\n5 : DELETION AT BEGINNING\n6 : DELETION AT A SPECIFIC POSITION\n7 : DELETION AT END\n8 : DISPLAY\n9 : EXIT\n");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1 : printf("CREATE\n");
         create();                        
         break;
case 2 : printf("INSERTION AT BEGINNING\n");
         insertatbeg();
         break;
case 3 : printf("INSERTION AT A POSITION\n");
         insertatposition();
         break;
case 4 : printf("INSERTION AT END\n");
         insertatend();
         break;
case 5 : printf("DELETION AT BEGINNING\n");
         deleteatbeg();
         break;
case 6 : printf("DELETION AT A POSITION\n");
         deleteatposition();
         break;
case 7 : printf("DELETION AT END\n");
         deleteatend();
         break;
case 8 : printf("DISPLAY\n");
         display();
         break;
case 9 : printf("EXITED\n");
         exit(0);
}
}
while(ch!=9);
}
