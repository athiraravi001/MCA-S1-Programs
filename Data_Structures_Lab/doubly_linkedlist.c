#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;

//CREATION OF A DOUBLY LINKED LIST

void create()
{
    int x,n,i;
    struct node *new,*ptr;
    printf("How many nodes to create : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        if(new==NULL)
        {
            printf("No memory space");
            return;
        }
        printf("Enter the data to be inserted : ");
        scanf("%d",&x);
        new->data=x;
        new->prev=NULL;
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
        }
        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new;
            new->prev=ptr;
        }
    }
}

//INSERTION AT BEGINNING

void insertatbeg()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("No memory space");
        return;
    }
    printf("Enter the data : ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=head;
    if(head!=NULL)
    {
        head->prev=new;
    }
    head=new;
}

//INSERTION AT A SPECIFIC POSITION

void insertatposition()
{
    int x,y;
    struct node *ptr,*new;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("No memory space");
        return;
    }
    printf("Enter the data : ");
    scanf("%d",&x);
    new->data=x;
    printf("Enter the data after which the new node to be inserted : ");
    scanf("%d",&y);
    ptr=head;
    while(ptr!=NULL&&ptr->data!=y)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("The given data is not present in the list");
        free(new);
    }
    else
    {
        new->next=ptr->next;
        new->prev=ptr;
        if(ptr->next!=NULL)
        {
            ptr->next->prev=new;
        }
        ptr->next=new;
    }
}

//INSERTION AT END

void insertatend()
{
    struct node *new;
    struct node *ptr;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("No memory space");
        return;
    }
    printf("Enter the data : ");
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL)
    {
        new->prev=NULL;
        head=new;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        } 
        ptr->next=new;
        new->prev=ptr;
    }
}

//DELETION AT BEGINNING

void deleteatbeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("No element to delete");
        return;
    }
    ptr=head;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
    printf("%d is deleted",ptr->data);
    free(ptr);
}

//DELETION AT A SPECIFIC POSITION

void deleteatposition()
{
    int x;
    struct node *ptr,*temp;
    printf("Enter the data to be deleted : ");
    scanf("%d",&x);
    ptr=head;
    while(ptr!=NULL&&ptr->data!=x)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("No such element found");
    }
    else
    {
        if(ptr->prev!=NULL)
        {
            ptr->prev->next=ptr->next;
        }
        else
        {
            head=ptr->next;
        }
        if(ptr->next!=NULL)
        {
            ptr->next->prev=ptr->prev;
        }
        printf("%d is deleted",ptr->data);
        free(ptr);
    }
}

//DELETION AT END

void deleteatend()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        printf("No element to delete");
        return;
    }
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->prev!=NULL)
    {
        ptr->prev->next=NULL;
    }
    else
    {
        head=NULL;
    }
    printf("%d is deleted",ptr->data);
    free(ptr);
}

//DISPLAY

void display()
{
    if(head==NULL)
    {
        printf("The list is empty");
        return;
    }
    struct node *ptr=head;
    printf("Elements are ");
    while(ptr!=NULL)
    {
        printf("\t%d\t",ptr->data);
        ptr=ptr->next;
    }
}

//********************************************************************************

void main()
{
int ch;
do
{
printf("\n\nDoublyinked list operations :-\n1 : CREATE\n2 : INSERTION AT BEGINNING\n3 : INSERTION AT A POSITION\n4 : INSERTION AT END\n5 : DELETION AT BEGINNING\n6 : DELETION AT A POSITION\n7 : DELETION AT END\n8 : DISPLAY\n9 : EXIT\n");
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