#include<stdio.h>
int main(){
	int n,arr[100];
	int temp;
	//input of array elements
	printf("Enter the number of number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;	
			}
		}
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
