#include<stdio.h>

void main(){
	char ch ='A';
	
	do{
		printf("%c ",ch);
		ch+=3;
		
	}while( ch<='Z');
}
