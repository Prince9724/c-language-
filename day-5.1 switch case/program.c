#include<stdio.h>
void main(){
	char choice;
	printf("How many Bones.\n");

	printf("A.  301\n");
	printf("B.  201\n");
	printf("C.  206\n");
	printf("D.  202\n");

	printf("enter you choice ");
	scanf("%C",&choice);
	
	printf("\n");
	
	switch(choice)
	{
	case 'A': printf("wrong answer");
	break;	 	
	case 'B': printf("wrong answer");	
	break;
	case 'C': printf("Correct answer");
	break;	
	case 'D': printf("wrong answer");	
		
	}
	
	
}
