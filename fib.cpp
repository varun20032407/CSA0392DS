#include<stdio.h>
int main(){
	int a=0,b=1,n;
	int c;
	printf("Enter the number:- ");
	scanf("%d",&n);
	if(n==1){
		printf("%d",a);
	}
	else{
		printf("%d",a);
		printf("\n%d",b);
		for(int i=2;i<=n;i++){
			c=a+b;
			printf("\n%d",c);
			a=b;
			b=c;
		}
	}
}
