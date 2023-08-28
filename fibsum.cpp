#include<stdio.h>
int main(){
	int n;
	int a=0,b=1;
	int c,sum;
	printf("Enter the number:- ");
	scanf("%d",n);
	if(n==1){
		printf("%d",a);
	}
	else{
		printf("%d",a);
		printf("%d",b);
		while(a<=n){
		sum+=a;
		c=a+b;
		a=b;
		b=c;
		}
		printf("%d",sum);
	}
}
