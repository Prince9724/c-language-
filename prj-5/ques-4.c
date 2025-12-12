#include<stdio.h>
int main(){
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
	int row,rowSum=0;
	printf("Enter row number : ");
	scanf("%d",&row);
	row = row-1;
	
	if(row < 0 && row >=1+ r){
    printf("Invalid row number");
    return 0;
	}
	
	printf("Element of row %d  : ",row);
	for(j=0;j<c;j++){
	 printf("%d ",a[row][j]);
	 rowSum=rowSum + a[row][j];
	 
	}
	printf("\nSum of row  %d:\n ",rowSum);
	printf("\n");
		int col, colSum=0;
	printf("Enter col number : ");
	scanf("%d",&col);
	col = col-1;
	
	if(col < 0 && col >=1+ r){
    printf("Invalid col number");
    return 0;
	}
	
	printf("Element of col %d  : ",col);
	for(i=0;i<r;i++){
	 printf("%d ",a[i][col]);
	 colSum=colSum + a[i][col];
	 
	}
	printf("\nSum of col :  %d ",colSum);
	
	
}
