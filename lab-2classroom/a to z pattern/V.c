#include<stdio.h>
void main (){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=5;j++){
			if((j==1	||j==5)&&(i==1||i==2||i==3||i==4||i==5)){
				printf(" *");
			}
			else if((j==2||j==4||j==4)&&i==6){
				printf(" *");
			}
			else if(j==3&&i==7){
				printf(" *");
			}
			 
			
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
