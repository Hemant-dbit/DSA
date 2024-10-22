/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: Queue
*/
#include<stdio.h>
#include<stdlib.h>

int queue[5];		//initialization
int f=-1,r=-1;

//input 
void enqueue(int);

//display
void display();

//delete
void dequeue();

//main method
void main(){
		int ch;        //user choice of operation
		int n1;        //storing elements
	
		while(1){
				printf("\n--Queue operation--");
				printf("\n1.Enqueue an element in queue");
				printf("\n2.Dequqe an element in queue");
				printf("\n3.Display elements of queue");
				printf("\n4.--Exit--");
				
				printf("\nEnter your choice:");
				scanf("%d",&ch);
				
					switch(ch){
				
							case 1: printf("Enter the element to be enqueded:");
							scanf("%d",&n1);
							enqueue(n1);
							break;
					
							case 2: dequeue();
							break;
					
							case 3: display();
							break;
					
							case 4: exit(1);
						
							default : printf("Enter valid number for operation");
					 		 break;
					  	
				}	//End of switch
		}			//End of while
}					//end of main

	//insertin in queue
	void enqueue(int n){
				if (r==n-1){
						printf("Queue is full");
				}
				else{
						if(r==-1 && f==-1){
									r=0;
									f=0;
									queue[r]=n;
						}
						else{
							r++;
							queue[r]=n;
						}
				}
	}		//end of enqueue function
	
	void dequeue(){
			if(r==-1 && f==-1){
					printf("Queue is Empty");
			}
			else{
				if(r==f){
						printf("Single element in queue");
				}
				else{
					f++;
				}	
			}
	}		//end of dequeue function			
	void display(){
			
			if(r==-1 && f==-1){
					printf("Queue is Empty");
			}
			else{
					for(int i=f;i<=r;i++){
								printf("\nElements are %d",queue[i]);
					}		//end of for loop
			}
	}	
