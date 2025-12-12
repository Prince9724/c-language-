
#include<stdio.h>
int main (){
 	int n,i;
 	 int arr[ 100];	
 	printf("Enter array size : ");
 	scanf("%d", &n);

 	
 	for(i=0;i<n;i++){
 		printf("Enter array's element %d : ",i+1);
 	scanf("%d",&arr[i]);
	 }
	     
printf("Array's negative element are : \n");
	 for(i=1;i<n;i++){
	 	if(arr[i]<n){
	 		
	 		printf("%d ",arr[i]);
		 }
		
	 }
 		
	return 0;
}
