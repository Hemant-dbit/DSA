/*
Roll no : 22
Batch:A
Author name: Hemant Gupta
Date: 25/07/2024
Description: Stack
*/
#include<stdio.h>
#include<stdlib.h>

	int stack[5];			//stack initialization
	int top=-1;
	//function prototype
	//insertion of element in stack
	void push(int);
	
	//deletion of element in stack
	void pop();
	
	//dispaly of stack
	void display();
	
	//main method 
	void main()
	{
	int ch;        //user choice of operation
	int n1;        //storing elements
	
		while(1){
				printf("\n--stack operation--");
				printf("\n1.Push an element in stack");
				printf("\n2.Pop an element in stack");
				printf("\n3.Display elements of stack");
				printf("\n4.--Exit--");
				
				printf("\nEnter your choice:");
				scanf("%d",&ch);
				
				switch(ch){
				
				case 1: printf("Enter the element to be pushed:");
					scanf("%d",&n1);
					push(n1);
					break;
					
				case 2: pop();
					break;
					
				case 3: display();
					break;
					
				case 4: exit(1);
					
				default : printf("Enter valid number for operation");
					  break;
					  
					
				}	//End of switch
				
		}			//End of while
					
					
	}				///end of main method

	void push(int x){
				if (top==4){
						printf("Stack is full");
				}
				else{
						top++;
						stack[top]=x;
				}
	}		//end of push function
	
	void pop(){
			if(top==-1){
					printf("Stack is Empty");
			}
			else{
					int a =stack[top];
					top--;
					printf("%d element is popped out of stack ",a);
			}
	}		//end of pop function
	
	void display(){
			int i;
			if(top==-1){
					printf("Stack is Empty");
			}
			else{
					for(i=top;i>=0;i--){
								printf("\nElements are %d",stack[i]);
					}		//end of for loop
			}
	}		//end of display function
