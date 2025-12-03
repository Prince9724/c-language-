
#include<stdio.h>
void main (){
	
// 1.
//	int i,j,k;
//	for(i=1;i<=5;i++){
//	 for(k=i;k<5;k++){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
	
//	2.
//	int i,j,k;
//	for(i=1;i<=5;i++){
//	 for(k=i;k<5;k++){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}

//	3.

//	int i,j,k;
//	for(i=5;i>=1;i--){
//	  	 for(k=1;k<i;k++){
//			printf("  ");
//		}
//		for(j=i;j<=5;j++){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}

//	4.
//	int i,j,k;
//	for(i=5;i>=1;i--){
//	  	 for(k=i;k>1;k--){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}  

//	5.
//	int i,j,k;
//	for(i=1;i<=5;i++){
//	 for(k=i;k<5;k++){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//			printf("%d ", i);
//		}
//		printf("\n");
//	}

//	6.
//	int i,j,k;
//	for(i=5;i>=1;i--){
//	  	 for(k=1;k<i;k++){
//			printf("  ");
//		}
//		for(j=i;j<=5;j++){
//			printf("%d ", i);
//		}
//		printf("\n");
//	}

//	7.
//		int i,j,k;
//	for(i=5;i>=1;i--){
//	  	 for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}

//	8.

//		int i,j,k;
//	for(i=1;i<=5;i++){
//	  	 for(k=1;k<i;k++){
//			printf("  ");
//		}
//		for(j=i;j<=5;j++){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}

//	9.

//		int i,j,k;
//	for(i=1;i<=5;i++){
//	  	 for(k=1;k<i;k++){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}

//	10.
//	int i,j,k;
//	for(i=5;i>=1;i--){
//	  	 for(k=i;k<5;k++){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
	
//	11.
//	int i,j,k;
//	for(i=5;i>=1;i--){
//	  	 for(k=i;k<5;k++){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//			printf("* ");
//		}
//		printf("\n");
//	}

	// 12.
 /*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
 
//	int i,j,k;
//	
//		for(i=1;i<=5;i++){
//			for(k=5;k>i;k--){
//				printf("  ");
//			}
//			for(j=1;j<=i;j++){
//				printf("* ",i);
//			}
//			printf("\n");
//		}

	//	13.
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
 
//	int i,j,k;
//	char ch = 'a';
//	
//		for(i=0;i<5;i++){
//			for(k=4;k>i;k--){
//				printf("  ");
//			}
//			for(j=i;j>=0;j--){
//				printf("%c ",'A'+j);
//			}
//			printf("\n");
//		}

	//14.
/*
A
A B
A B C
A B C D
A B C D E */

//int i,j,k;
//	char ch = 'a';
//	
//		for(i=0;i<5;i++){
//			for(k=4;k>i;k--){
//				printf("  ");
//			}
//			for(j=0;j<=i;j++){
//				printf("%c ",'A'+ j);
//			}
//			printf("\n");
//		}

	
	//15.

//A B C D E
//A B C D
//A B C
//A B
//A

//	int i,j,k;
//	char ch = 'A';
//	
//		for(i=5;i>0;i--){
//			for(k=i;k<5;k++){
//				printf("  ");
//			}
//			for(j=0;j<i;j++){
//				printf("%c ", 'A' + j);
//			}
//			printf("\n");
//		}


	//16.
//A B C D E
//B C D E
//C D E
//D E
//E

//	int i,j,k;
//	char ch = 'A';
//		for(i=0;i<5;i++){
//			for(k=0;k<i;k++){
//				printf("  ");
//			}
//			for(j=i;j<5;j++){
//				printf("%c ",'A' + j);
//			}
//			printf("\n");
//		}


	//17.
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

//	int i,j,k;
//	char ch = 'A';
//		for(i=1;i<=5;i++){
//			for(k=5;k>i;k--){
//				printf("  ");
//			}
//			for(j=1;j<=i;j++){
//				if(j % 2 == 0){
//					printf("0 ");
//				}else{
//					printf("1 ");
//				}
////				printf("%d ",j);
//			}
//			printf("\n");
//		}

	//18.
//1
//0 0
//1 1 1
//0 0 0 0
//1 1 1 1 1
//	int i,j,k;
//		for(i=1;i<=5;i++){
//			for(k=5;k>i;k--){
//				printf("  ");
//			}
//			for(j=1;j<=i;j++){
//				if(i % 2 == 1){
//					printf("1 ");
//				}else{
//					printf("0 ");
//				}
////				printf("%d ",i);
//			}
//			printf("\n");
//		}

//	19.
//1 0 1 0 1
//0 1 0 1
//1 0 1
//0 1
//1

//	int i,j,k;
//		for(i=1;i<=5;i++){
//			for(k=1;k<i;k++){
//				printf("  ");
//			}
//			for(j=i;j<=5;j++){
//				if(j % 2 == 1){
//					printf("1 ");
//				}else{
//					printf("0 ");
//				}
////				printf("%d ",j);
//			}
//			printf("\n");
//		}


//	20.
//1 0 1 0 1
//1 0 1 0
//1 0 1
//1 0
//1

//	int i,j,k;
//		for(i=5;i>=1;i--){
//			for(k=i;k<5;k++){
//				printf("  ");
//			}
//			for(j=1;j<=i;j++){
//				if(j % 2 == 1){
//					printf("1 ");
//				}else{
//					printf("0 ");
//				}
////				printf("%d ",j);
//			}
//			printf("\n");
//		}


	//21.
//1 1 1 1 1
//0 0 0 0
//1 1 1
//0 0
//1

//	int i,j,k;
//		for(i=1;i<=5;i++){
//			for(k=1;k<i;k++){
//				printf("  ");
//			}
//			for(j=i;j<=5;j++){
//				if(i % 2 == 1){
//					printf("1 ");
//				}else{
//					printf("0 ");
//				}
////				printf("%d ",i);
//			}
//			printf("\n");
//		}

	//22.
//- | - | -
//- | - |
//- | -
//- |
//-
//	int i,j,k;
//		for(i=5;i>=1;i--){
//			for(k=i;k<5;k++){
//				printf("  ");
//			}
//			for(j=1;j<=i;j++){
//				if(j % 2 == 1){
//					printf("- ");
//				}else{
//					printf("/ ");
//				}
////				printf("%d ",j);
//			}
//			printf("\n");
//		}

	//23.
//|
//| -
//| - |
//| - | -
//| - | - |

//  int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			if(j % 2 == 1){
//				printf("/ ");
//			}else{
//				printf("- ");
//			}
////			printf("%d ",j);
//		}
//		printf("\n");
//	}


//	24.

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



//25.
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
		
//		26.
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
		
		
		
		
		
//		27.

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
		
		
//		28.

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
 













