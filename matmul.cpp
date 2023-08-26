#include<stdio.h>
int main(){
	int r1,c1,r2,c2;
	printf("Enter the number of rows1:- ");
	scanf("%d",&r1);
	printf("Enter the number of rows2:- ");
	scanf("%d",&r2);
	printf("Enter the number of colomuns1:- ");
	scanf("%d",&c1);
	printf("Enter the number of colomuns2:- ");
	scanf("%d",&c2);
	if(c1!=r2){
		printf("Matrix multiplication is not possible");
	}
	int m1[r1][c1],m2[r2][c2],res[r1][c2];
	printf("Enter the elements in m1:- ");
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter the elements in m2:- ");
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			res[i][j]=0;
			for(int k=0;k<c1;k++){
				res[i][j]+=m1[i][k]*m2[k][i];
			}
		}
	}
	printf("Matrix Multipication:-" );
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			printf("%d",res[i][j]);
		}
		printf("\n");
	}
}
