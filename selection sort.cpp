#include<stdio.h>
int main(){
	int d;
	int n,arr[100];
	int temp,s;
	int found=0,ind=-1;
	//input of array elements
	printf("Enter the number of number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
for(int i=0;i<n-1;i++){
	int min=i;
	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[min]){
			int min=j;
				temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
		}
	}
}
printf("\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}

