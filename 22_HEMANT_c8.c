/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: To find duplicate elements in an array
*/
#include <stdio.h>
int main()
{
    int arr[100],i,j,n,count=0 ;  		//initialization
    printf("Enter the size of the array- ");
    scanf("%d", &n);
    
    printf("Enter elements in the array- ");	//input elements in array
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }  
    
    for(i=0; i<n; i++)				//finding duplicate elements in an array
    {
      for(j = i + 1; j < n; j++)
      {
        if(arr[i] == arr[j])
        {
          count++;
          break;
        }
      }
    }
    printf("Total duplicate numbers in the array- %d",count);
    return 0;
}
