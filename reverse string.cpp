#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char n[100];
	int v=1;
	printf("Enter the string:- ");
	scanf("%s",&n);
	int m=0,n1=strlen(n)-1;
	for(int i=m;i<n1;i++){
		int temp=n[i];
		n[i]=n[n1];
		n[n1]=temp;
		n1--;
	}
	printf("The reversed string:-%s ",n);
	for(int i=0;i<strlen(n);i++){
		if(!isalpha(n[i])&&!isspace(n[i])&&n[i]=='`'&&n[i]=='~'&&n[i]=='!'&&n[i]=='@'&&n[i]=='#'&&n[i]=='$'&&n[i]=='%'&&n[i]=='^'&&n[i]=='&'&&n[i]=='*'&&n[i]=='*'&&n[i]=='()'&&n[i]=='_'&&n[i]=='-'&&n[i]=='{}'&&n[i]=='+'&&n[i]=='='&&n[i]=='[]'&&n[i]=='|'&&n[i]=='<'&&n[i]=='>'&&n[i]==','&&n[i]=='.'&&n[i]=='?'&&n[i]=='/'&&n[i]==':'&&n[i]==';'){
			v=0;
		}
	}
	if(v){
		printf("\nString is valid");
	}
	else{
		printf("\nString is not valid");
	}
}
