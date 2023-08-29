#include<stdio.h>
int main(){
	int n,arr[100];
	printf("enter the number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element: ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Insert Sort\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
