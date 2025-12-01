#include<stdio.h>
void main(){
	int i,j;
		for(i=1;i<=7;i++){
			for(j=1;j<=7;j++){
				if((j==1||j==7)&&(i==1||i==7)){
					printf(" *");
				}
				else if((j==2||j==6)&&(i==2||i==6)){
					printf(" *");
				} 
				else if((j==3||j==5)&&(i==3||i==5)){
					printf(" *");
				}
				else if( j==4&&i==4){
					printf(" *");
				}
				 
				else{
					printf("  ");
				}
			}
			printf("\n");
		}	
}
