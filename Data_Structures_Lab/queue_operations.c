#include<stdio.h>
#include<stdlib.h>
void main()
{
int q[10],front=-1,rear=-1,c,item,i,size;
printf("Enter the size of queue : ");
scanf("%d",&size);
do
{
printf("\n\nMENU\n 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.EXIT \n");
printf("Enter your option : ");
scanf("%d",&c);
switch(c)
{
case 1 : printf("ENQUEUE\n");
         if(rear==size-1)
         {
            printf("Queue overflow ");
            break;
         }
         if(front==-1 && rear==-1)
         {
            front=rear=0;
         }
         else
         {
            rear=rear+1;
         }
         printf("Enter value to queue : ");
         scanf("%d",&item);
         q[rear]=item;
         break;
case 2 : printf("DEQUEUE\n");
         if(front==-1 && rear==-1)
         {
            printf("Queue is empty\n");
            break;
         }
         else if(front==rear)
         {
            item=q[front];
            front=rear=-1;
            printf("%d dequeued from queue",item);
            break;
         }
         else
         {
            item=q[front];
            front=front+1;
            printf("%d dequeued from queue",item);
            break;
         }
case 3 : printf("DISPLAY\n");
         if(front!=-1)
         {
            printf("Queue elements are ");
            for(i=front;i<=rear;i++)
            {
                printf("%d\t",q[i]);
            }
         }
         else
         {
            printf("Queue is empty\n");
         }
         break;
case 4 : printf("EXITED\n");
         exit(0);
}
}
while(c);
}
