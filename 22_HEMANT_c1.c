/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: TO search a number in fibonacci series
*/


#include<stdio.h>
 
void main()
{
    int a=0,b=1,c,n;
    printf("Enter the number you want to search in fibonacci series");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=1;i<=10;i++)
    {
       c=a+b;
       a=b;
       b=c;
       printf(" %d ",c);
       if(n==c)
       {
          printf("\n  Number %d is a part of the above fibonacci series",c);
          break;
       }
       if(c>n)
      	break; 
    }
    if(n!=c)
    {
      printf("\n %d Number %d is not a part of the above  fibonnaci series ",n);
    }
    
 }
