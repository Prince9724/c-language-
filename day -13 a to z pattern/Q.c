
#include<stdio.h>
void main (){
	int i,j;
	for (i=1;i<=7;i++){
		for(j=1;j<=5;j++){
			if((j==4||j==2||j==3)&&(i==1)){
				printf(" *");
			}
			else if((j==1||j==2)&&(i==7)){
				if((j==1||j==2||j==3)&&(i==1)){
				printf(" *");
			}
			}
			else if (j==1&&(i==2||i==3||i==4||i==5||i==5)){
			printf(" *");	
			}
			else if (j==5 &&(i==2||i==3||i==4||i==5)){
			printf(" *");	
			}
			else if(i==6&&(j==2||j==3)){
			printf(" *");	
			}
			else if (i==5&&j==4){
				printf("* ");	
			}
			else if (i==6&&j==4){
				printf("  *");
			}
			 
			else if (i==7&&j==5){
				printf("      *");
			}
			else{
				printf("  ");
			}
		}
	printf("\n");
	}
	
}
