#include<stdio.h>
 int main(){
	int num = 384;
		printf("Enter any number : ");
	scanf("%d", &num);
	 int temp=num;
	int ld=temp%10;
	while(temp>9){//num>9 
		temp = (temp /10);
	 
	}
	int fd = temp;
	int sum = fd+ld;
	printf("%d ", sum);
	

}
