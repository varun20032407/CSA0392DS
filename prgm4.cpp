#include<stdio.h>
int main(){
	int n,n1;
	char arr[100];
	int arr1[100];
	printf("Enter the number of nodes:-");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the node:- ");
		scanf("%s",&arr[i]);
	}
	printf("THE NODES\n");
	for(int i=0;i<n;i++){
		printf("%c\n",arr[i]);
	}
	printf("Enter the number of edges:- ");
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		printf("Enter the edge value:- ");
		scanf("%d",&arr1[i]);
	}
	printf("THE EDGES\n");
	for(int i=0;i<n1;i++){
		printf("%d\n",arr1[i]);
	}
	printf("\nSHORTEST PATHHHH!!!\n");
	int a=arr1[0]+arr1[1];
	int b=arr1[5]+arr1[4]+arr1[8];
	int c=arr1[0]+arr1[6]+arr1[4]+arr1[8];
	int d=arr1[0]+arr1[7]+arr1[8];
	int e=arr1[5]+arr1[4]+arr1[3]+arr1[2];
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	if(a<b&&a<c&&a<d&&a<e){
		printf("Shortes path value %d",a);
	}
	else if(b<a&&b<c&&b<d&&b<e){
		printf("Shortes path value %d",b);
	}
	else if(c<a&&c<b&&c<d&&c<e){
		printf("Shortes path value %d",c);
	}
	else if(d<a&&d<b&&d<c&&d<e){
		printf("Shortes path value %d",d);
	}
	else{
		printf("Shortes path value %d",e);
	}
}
