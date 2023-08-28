#include<stdio.h>
int main(){
	int n,arr[100];
	int found=0,ind=-1,s;
	printf("Enter the number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element:- ");
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
	printf("\nSORTED ARRAY");
	for(int i=0;i<n;i++){
		printf("\n%d",arr[i]);
	}
	printf("\nEnter the element to search:- ");
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		if(arr[i]==s){
			found=1;
			ind=i;
			break;
		}
	}
	if(found){
		printf("\nElement %d found",s);
	}
	else{
		printf("\nElement %d not found",s);
	}
	printf("\nMinimum Number:- %d",arr[0]);
	printf("\nMaximum Number:- %d",arr[n-1]);
}
