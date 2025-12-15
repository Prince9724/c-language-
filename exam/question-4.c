#include<stdio.h>
void main(){
	int	arr[100];
	int i,n,*ptr;
	printf("Enter number of element : ");
	scanf("%d",&n);
	  printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    ptr=arr;//arr ki value ptr me store 
    for(i=0;i<n;i++){
    	printf("%d ",(*ptr)*(*ptr));
    	ptr++;//ptr++ 1-2-3;
	}
	  
	
}
