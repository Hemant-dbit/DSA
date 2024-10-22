/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: To input time, display time ,update time using structure
*/
#include<stdio.h>
#include<stdlib.h>
void up ();		//update function
void time();
struct time
{
   int hour;
   int sec;
   int min;
}t1;

void main()
{
   t1.hour=20;
   t1.min=30;
   t1.sec=40;
   int choice;
   while(1)
   {
	printf("\n1.Enter time");
	printf("\n2.Display time ");
	printf("\n3.Update time ");
	printf("\n4.--Exit--");
				
	printf("\nEnter your choice:");
	scanf("%d",&choice);
   	switch(choice)
   	{
        	case 1: time();
                       break;
               
        	case 2:printf("The time is %d:%d:%d",t1.hour,t1.min,t1.sec);
        	       break;
                   
        	case 3:   up ();
        	        break; 
        	
        	case 4: exit(1);
                     
         	default: printf("Enter correct data");
         		break;
    
        }
    }
}
   
	void up (){								//updating time
              
              	     int h,m,s;
                      printf("Enter the time to update");
                      scanf("%d %d %d",&h,&m,&s);
                      
                      t1.sec=s+t1.sec;				//updating sec
                      if(t1.sec>59)
                      {
                          t1.sec=t1.sec-60;
                          t1.min++;
                      }
                      
                      t1.min=m+t1.min;			  //updating minute
                      if(t1.min>59)
                      {
                          t1.min =t1.min-60;
                          t1.hour++;
                      }
                      
                      t1.hour=t1.hour+h;             //updating hour
                      if(t1.hour>23)
                      { 
                         t1.hour =t1.hour-24;
                      }
                       printf("The time is %d:%d:%d",t1.hour,t1.min,t1.sec);
         } 
                         
	void time (){								//time
              	      int h,m,s;
              	      printf("Enter the time(hour:min:sec)");
              
              	      scanf("%d %d %d",&h,&m,&s);
                     
                      if((h>24) || (m>59) || (s>59))  
                      {
                      	printf("Enter the correct time!!!!(hour:min:sec)");
                      } 
                      else{
                      	scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
                      }
	}
