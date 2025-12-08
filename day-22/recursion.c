#include<stdio.h>

//recursion.
//void start(int n){
//		printf("hello : \n ");
//		
//		if(n>1)// agr n >0 then print hello 6 time / if n>=0 then 7 time hello print .
//		
//		{
//			n--;
//			start(n);
//		}
//	}
//
//int main(){
//	start(5);
//	return 0;
//}

	//print 1 to n
	
//	void print (int i, int n){
//		printf("%d ",i);
//		if (i<n){
//			i++;
//			print(i,n);
//		}
//	}
//	int main(){
//		 print	(1,20);
//		return 0;
//	}
 
 
 //factorial number of n!. 
 
 int fact(n){
 	if(n==1){
 		return 1;
	 }
 	 return n * fact(n-1);
 }
 int main(){
 int a=	fact(5);
 	printf("%d ",a);
 	return 0;
 }
