#include<stdio.h>
#include<stdlib.h>
int main(){
	int top=-1;
	int n,arr[100];
	int s,p,h;
	//top value print
	printf("TOP= %d",top);
	//elements input in stack
	printf("\nEnter the number of elements in stack:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr[i]);
	}
	//printing stack elements
	printf("STACK ELEMENTS\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	//print top value after entering stack elements
	int x=n+top;
	printf("\nTOP VALUE AFTER INSERTING ELEMENTS= %d",x);
	//getting choice of stack operations
	printf("\n1.PUSH");
	printf("\n2.POP");
	printf("\n3.PEEK");
	printf("\nEnter the choice(1,2,3):- ");
	scanf("%d",&s);
	//push
	if(s==1){
		printf("\nOPERATION PUSH\n");
		printf("Enter the value to push:- ");
		scanf("%d",&p);
		for(int i=n;i>0;i--){
			arr[i]=arr[i-1];
		}
		//insert at beggning
		arr[0]=p;
		n++;
		printf("\nSTACK AFTER PUSH");
		for(int i=0;i<n;i++){
			printf("\n%d\n",arr[i]);
		}
		int x=n+top;
		printf("\nTOP VALUE= %d",x);

	}
	//pop
	else if(s==2){
		printf("\nOPERATION POP\n");
		if(n<=0){
			printf("\nEMPTY STACK\n");
			exit(0);
		}
		else{
			printf("Enter the element to pop:- ");
			scanf("%d",&h);
			for(int i=0;i<n-1;i++){
				arr[i]=arr[i+1];
			}
			n--;
			printf("\nSTACK AFTER POP");
			for(int i=0;i<n;i++){
				printf("\n%d\n",arr[i]);
			}
			int x=n+top;
			printf("\nTOP VALUE= %d",x);
		}
	}
	//peek
	else if(n==3){
		printf("\nOPERATION PEEK\n");
		printf("ELEMENT IN TOP= %d",arr[0]);
		int x=n+top;
		printf("\nTOP VALUE= %d",x);
	}
}
