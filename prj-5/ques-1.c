#include<stdio.h>
void main(){
	int r,c,i,j;
	printf(" Enter the array's row size : ");
	scanf("%d",& r);
	printf(" Enter the array's collom size  : ");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" Enter array's element a [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);		
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int max = a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			
			if( a[i][j]>max){
				max=a[i][j];
			}
			
		}
		printf("\n");
	}
	printf(" max number is : %d ",max);
	
	
}
