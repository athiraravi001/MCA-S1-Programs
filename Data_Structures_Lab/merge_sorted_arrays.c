#include<stdio.h>
void main()
{
int a[10],b[10],c[50],n1,n2,i,j,k;
printf("Enter size of first array :");
scanf("%d",&n1);
printf("Enter the elements of first array : ");
for(i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter size of second array : ");
scanf("%d",&n2);
printf("Enter the elements of second array : ");
for(j=0;j<n2;j++)
{
    scanf("%d",&b[j]);
}
i=j=k=0;
while(i<n1&&j<n2)
{
    if(a[i]<b[j])
    {
        c[k]=a[i];
        i++;
        k++;
    }
    else
    {
        c[k]=b[j];
        j++;
        k++;                                        
    }
}
while(i<n1)
{
    c[k]=a[i];
    i++;
    k++;
}
while(j<n2)
{
    c[k]=b[j];
    j++;
    k++;
}                          
printf("The merged array\n");
for(k=0;k<n1+n2;k++)
{
    printf("%d\t",c[k]);
}
}
