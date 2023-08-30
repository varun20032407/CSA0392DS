#include<stdio.h>
int main(){
	int n1,n2,arr1[100],arr2[100],res1[200];
	int ind=0;
	printf("Enter the number of elements in array 1:-");
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter the number of elements in array 2:-");
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
		printf("Enter the element:- ");
		scanf("%d",&arr2[i]);
	}
	printf("ARRAY 1 ELEMENTS\n");
	for(int i=0;i<n1;i++){
		printf("%d\n",arr1[i]);
	}
	printf("ARRAY 2 ELEMENTS\n");
	for(int i=0;i<n2;i++){
		printf("%d\n",arr2[i]);
	}
	for(int i=0;i<n1;i++){
		res1[ind]=arr1[i];
		ind++;
	}
	for(int i=0;i<n2;i++){
		res1[ind]=arr2[i];
		ind++;
	}
	printf("\nMERGED ARRAY\n");
	for(int i=0;i<n1+n2;i++){
		printf("%d\n",res1[i]);
	}
	for(int i=0;i<n1+n2;i++){
		for(int j=i+1;j<n1+n2;j++){
			if(res1[i]>res1[j]){
				int temp=res1[i];
				res1[i]=res1[j];
				res1[j]=temp;
			}
		}
	}
	printf("\nMERGED SORTED ARRAY\n");
	for(int i=0;i<n1+n2;i++){
		printf("%d\n",res1[i]);
	}
}
