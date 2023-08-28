//palindrome of single linked list
#include<stdio.h>
int main(){
	int n,arr[100];
	int arr1[100];
	int equal=0;
	printf("Enter the number of elements:- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr[i]);
	}
	printf("ELEMENTS\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("REVERSE OF ELEMENTS\n");
	for(int i=n-1;i>=0;i--){
		arr1[i]=arr[i];
		printf("%d\n",arr1[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]=arr1[i]){
		equal=1;
		break;
		}
	}
	if(equal){
		printf("Single link list is palindrome");
	}
	else{
		printf("Single link list is not a palindrome");
	}
}

