#include<stdio.h>
#include<stdlib.h>
int a[3],max=3,front=-1,rear=-1;

//ENQUEUE

void enqueue()
{  
    int x;
    if((rear+1)%max==front)
    {
        printf("Queue overflow");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        printf("Enter elements to be inserted : ");
        scanf("%d",&x);
        a[rear]=x;
    }
    else
    {
        printf("Enter elements to be inserted : ");
        scanf("%d",&x);
        rear=(rear+1)%max;
        a[rear]=x;
    }
}

//DEQUEUE

void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue underflow");
    }
    else if(front==rear)
    {
        printf("The dequeued element is %d",a[front]);
        front=rear=-1;
    }
    else
    {
        printf("The dequeued element is %d",a[front]);
        front=(front+1)%max;
    }
}

//DISPLAY

void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Elements in a queue are ");
    }
    while(1)
    {
        printf("%d\t",a[i]);
        if(i==rear)
        break;
        i=(i+1)%max;
    }
}

int main()
{
int choice=1;
do
{
printf("\n\nMENU\n1 : ENQUEUE\n2 : DEQUEUE\n3 : DISPLAY\n4 : EXIT\n");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 : printf("ENQUEUE\n");
         enqueue();
         break;
case 2 : printf("DEQUEUE\n");
         dequeue();
         break;
case 3 : printf("DISPLAY\n");
         display();
         break;
case 4 : printf("EXITED\n");
         exit(0);
}
}
while(choice);
return 0;
}
         