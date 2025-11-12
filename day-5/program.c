
#include<stdio.h>
void main (){
	int units = 105;
	float total;
	
	if(units>=1 && units<=20)
	{
		total =  units * 1;
		printf("your bill amount is %d",total);
		
	}
	else if(units>=20 && units<=50){
		total = 20 + (units-20)*1.5;
		printf("your bill amount is %f",total);
		 }
	else if(units>=50 && units<=100)
	{
		total = 20+45+(units-50)*2;
		printf("your bill amount is %f",total);
	}	
	else if(units>=101 && units>=150){
	
	total = 20+45+100+(units-100)*2.5;
	printf("your bill amount is %f",total);	 
	}
	}

	

	 
		 
		 
	





