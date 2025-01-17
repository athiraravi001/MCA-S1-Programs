#include<stdio.h>
#include<stdlib.h>
void main()
{
int c;
int a[10],i,j,n,element,index,flag=0,key,temp;
printf("Enter array size : ");
scanf("%d",&n);
printf("Enter array elements : ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
do
{
printf("\n\nARRAY OPERATIONS\n 1 : TRAVERSAL\n 2 : INSERTION\n 3 : DELETION\n 4 : SEARCHING\n 5 : SORTING\n 6 : EXIT\n");
printf("Enter your choice : ");
scanf("%d",&c);
switch(c)
{
case 1 : printf("TRAVERSAL\n");
         printf("Array elements are ");
         for (i=0;i<n;i++) 
         {
            printf("%d ",a[i]); 
         }
         break;
case 2 : printf("INSERTION\n");
         printf("Enter the element to be inserted : ");
         scanf("%d",&element);
         printf("Enter the position to be inserted : ");
         scanf("%d",&index);
         for(i=n-1;i>=index;i--)
         {
            a[i+1]=a[i];
         }
         a[index]=element;
         n=n+1;
         printf("After insertion\t");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
         break;
case 3 : printf("DELETION\n");
         printf("Enter the position to be deleted : ");
         scanf("%d",&index);
         for(i=index+1;i<n;i++)
         {
            a[i-1]=a[i];
         }
         n=n-1;
         printf("After deletion\t");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
         break;
case 4 : printf("SEARCHING\n");
         printf("Enter the element to be searched : ");
         scanf("%d",&key);
         for(i=0;i<n;i++)
         {
            if(a[i]==key)
            {
                flag=1;
                break;
            }
         }
         if(flag==1)
         printf("Element is found\n");
         else
         printf("Element is not found\n");
         break;
case 5 : printf("SORTING\n");
         printf("Before sorting\n");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
         for(i=0;i<n-1;i++)
         {
         for(j=0;j<n-1;j++)
         {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
         }
         }
         printf("\nAfter sorting\n");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
         break;
case 6 : printf("EXITED\n");
         exit(0);
}
}
while(c);
}
