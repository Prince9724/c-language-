
#include<stdio.h>
void main(){
	int num ;
	int count=0;
	printf("Enter any number " );
	scanf("%d",&num);
	while(num>0){
		num=num/10;
		count++;
	}
	printf("%d ",count);
	
}
