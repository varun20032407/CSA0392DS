#include<stdio.h>
#define Size 4
#include<stdlib.h>
int main(){
	int n,x;
	int top=-1,arr[Size];
	printf("1.PUSH");
	printf("\n2.POP");
	printf("\n3.SHOW");
	printf("\nEnter the choice:- ");
	scanf("%d",&x);
	if(x==1){
		if(top==Size-1){
			printf("\nOverflow");
		}
		else{
			printf("Enter element in stack:- ");
			scanf("%d",&n);
			top=top+1;
			arr[top]=n;
		}
	}
	else if(x==2){
		if(top==-1){
			printf("\nUnderflow");
		}
		else{
			printf("\nPopped Element:- %d",arr[top]);
			top=top-1;
		}
	}
	else if(x==3){
		if(top==-1){
			printf("\nUnderflow");
		}
		else{
			printf("\nElements present in the stack");
			for(int i=top;i>=0;i--){
				printf("%d\n",arr[i]);
			}
		}
	}
	else{
		printf("\nInvalid choice");
	}
}
