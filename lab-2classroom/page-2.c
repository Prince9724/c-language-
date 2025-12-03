#include<stdio.h>
void main{

//	1.

//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5


//	int i,j;
//		for(i=5;i>=1;i--){
//			for(j=1;j<=i;j++){
//				printf("%d ",j);
//			}
//			printf("\n");
//		}
//		for(i=2;i<=5;i++){
//			for(j=1;j<=i;j++){
//				printf("%d ",j);
//			}
//			printf("\n");
//		}



//2 .
//
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1



//	int i,j;
//		for(i=1;i<=5;i++){
//			for(j=1;j<=i;j++){
//				printf("%d ",j);
//			}
//			printf("\n");
//		}
//		 
//		for(i=4;i>=1;i--){
//			for(j=1;j<=i;j++){
//				printf("%d ",j);
//			}
//			printf("\n");
//		}
//	3	
//		 .
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4     4 3 2 1
//1 2 3         3 2 1
//1 2             2 1
//1                 1


//int i,j,k,l;
//		for(i=5;i>=1;i--){
//			for(j=1;j<=i;j++){
//				printf("%d ",j);
//			}
//			for(k=i;k<5;k++){
//				printf("    ",k);
//			}
//			for(l=i;l>=1;l--){
//				printf("%d ",l);
//			}
//			printf("\n");
//		}
		
		
		
		
		
//		4.

//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1

//int i,j,k,l;
//for(i=1;i<=5;i++){
//			for(j=1;j<=i;j++){
//				printf("%d ",j);
//			}
//			for(k=i;k<5;k++){
//				printf("    ");
//			}
//			for(l=i;l>=1;l--){
//				printf("%d ",l);
//			}
//			printf("\n");
//		}
		
		
//		5.
	
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4     4 3 2 1
//1 2 3         3 2 1
//1 2             2 1
//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1
	int i,j,k,l;
		for(i=5;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("%d ",j);
			}
			for(k=i;k<5;k++){
				printf("    ",k);
			}
			for(l=i;l>=1;l--){
				printf("%d ",l);
			}
			printf("\n");
		}
		for(i=2;i<=5;i++){
			for(j=1;j<=i;j++){
				printf("%d ",j);
			}
			for(k=i;k<5;k++){
				printf("    ");
			}
			for(l=i;l>=1;l--){
				printf("%d ",l);
			}
			printf("\n");
		}


}
