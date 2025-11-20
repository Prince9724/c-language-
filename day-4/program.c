#include<stdio.h>
void main(){
	// eligible age
	int  age = 25;
	 if(age >= 18)
	 {
	 	
	 	printf("your age is eligible");
	 }
	 else{
	 	printf("your age is not eligble ");
	 }
	//odd or evwn number
	printf("\n");
	
	int num = 36;
	if(num%2 == 0){
		printf("even number");
	} 
	else{
		printf("number is odd");
	}
	printf("\n");
	//leep year
	int leep = 2025;
	if(leep%4 == 0){
		printf("leep year");
	}
	else{
		printf("not leep year");
	}
}
