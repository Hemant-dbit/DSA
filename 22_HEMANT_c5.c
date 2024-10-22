/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: To find a largest element in an array
*/
#include <stdio.h>
void main()
{
   int a[100],size,i,j,temp;		//initialization
   printf("Enter the size of the array:");
   scanf("\n%d",&size);
   printf("Enter the elements:\n");
   
   for(i=0;i<size;i++)			//input elements
   {
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<size;i++)			//finding largest element in an array
   {
       for(j=i+1;j<size;j++)
       {
           if(a[i]<a[j])
           {
               temp=a[j];
           }
       }
   }
   printf("%d",temp);
  
}
