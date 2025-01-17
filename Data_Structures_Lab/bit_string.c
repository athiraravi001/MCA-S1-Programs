#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void setunion(char *,char *,char *);
void setintersection(char *,char *,char *);
void setdifference(char *,char *,char *);

void main()
{
char s1[20],s2[20],s3[20];
printf("Enter set1 : ");
scanf("%s",s1);
printf("Enter set2 : ");
scanf("%s",s2);
setunion(s1,s2,s3);
printf("\nUnion = %s",s3);
setintersection(s1,s2,s3);
printf("\nIntersection = %s",s3);
setdifference(s1,s2,s3);
printf("\nDifference = %s",s3);
}

//SET-UNION

void setunion(char *s1,char *s2,char *s3)
{
    int i,l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]=='1'|| s2[i]=='1')
        s3[i]='1';
        else
        s3[i]='0';
    }
    s3[i]='\0';
}

//SET-INTERSECTION

void setintersection(char *s1,char *s2,char *s3)
{
    int i,l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]=='1'&& s2[i]=='1')
        s3[i]='1';
        else
        s3[i]='0';
    }
    s3[i]='\0';
}

//SET-DIFFERENCE

void setdifference(char *s1,char *s2,char *s3)
{ 
    int i,l=strlen(s1);
    for(i=0;i<l;i++)
    { 
        if(s1[i]=='1'&& s2[i]=='0')
        s3[i]='1';
        else
        s3[i]='0';
    }
    s3[i]='\0';
}
