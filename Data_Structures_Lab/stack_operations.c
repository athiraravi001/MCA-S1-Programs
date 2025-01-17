#include<stdio.h>
#include<stdlib.h>
void main()
{
int c,a[10],top=-1,i,item,size;
printf("Enter the size of stack : ");
scanf("%d",&size);
do
{
printf("\n\nMENU\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
printf("Enter your choice : ");
scanf("%d",&c);
switch(c)
{
case 1 : printf("PUSH\n");
         if(top==size-1)
	     {
            printf("stack full\n");
	     }
         else
         {
  	        top=top+1;
  	        a[top]=item;
            printf("Enter the element to push : ");
  	        scanf("%d",&a[top]);
  	     }
         break;
case 2 : printf("POP\n");
         if(top<0)
         {
  	        printf("Stack is empty");
         }
         else
         {
            item=a[top];
  	        top=top-1;
  	        printf("Element %d is deleted",item);
         }
         break;
case 3 : printf("DISPLAY\n");
         if(top>=0)
         {
  	        printf("The stack elements are ");
            for(int i=0;i<=top;i++)
            {
  	         printf("%d\t",a[i]);
            }
         }
         else
         {
  	        printf("Stack is empty");
         }
  	     break;
case 4 : printf("EXITED\n");
         exit(0); 	         
 }
 }
 while(c);
 }
 
 
