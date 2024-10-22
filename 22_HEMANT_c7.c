/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: To compare two arrays and return 1 if they are identical otherwise 0
*/
#include<stdio.h>
void cmp(int a[10],int b[10],int n);
void main()
{
     int a[10],b[10],n,i;			//initialization
     printf("Enter the number of elements");
     scanf("%d",&n);
     
     printf("Enter elements of first array");	//First array
     for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
     
     printf("Enter elements of second array");	//Second array
     for(i=0;i<n;i++)
     {
       scanf("%d",&b[i]);
     }
     cmp(a,b,n);
     
 }
      void cmp(int a[10],int b[10],int n)
      {
     	 int c=1;
      	 for(int i=0;i<n;i++)				//comparison of two arrays
     	 {
            if(a[i]!=b[i])
            {
                c=0;
                break;
            }
           
      	   
      	}
      	  printf("%d",c);
      }
 

      
            
      
