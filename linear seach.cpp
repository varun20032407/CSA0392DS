#include<stdio.h>
int main(){
	int n,d,arr[100];
	int s,found=0,ind=-1;
	printf("Enter the number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the elements:- ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("Enter the element to search:- ");
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		if(arr[i]==s){
			found=1;
			ind=i;
			break;
		}
	}
	if(found){
	printf("Element found:- %d",ind);
	}
	else{
		printf("Element not found");
	}
	printf("\nEnter the display element:- ");
	scanf("%d",&d);
	printf("%d",arr[d]);
}

