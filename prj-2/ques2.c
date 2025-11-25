

#include<stdio.h>
void main (){
	int score;
	char grade;
	printf("enter you score ");
	scanf("%d",&score);
			if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else if (score >= 33)
        grade = 'E';
    else
        grade = 'F';
        
        switch(grade){
        	case 'A' : printf("Your Grade is A : Exelent work");
        	break;
        	case 'B' : printf("Youa grade is B : Well done");
        	break;
        	case 'C' : printf("Your grade is C : Good job.");
        	break;
        	case 'D' : printf("your grade is D : Good ");
        	break;
        	case 'E' : printf("Your grade is E : Pass");
        	break;
        	case 'F' : printf ("your grade is F : you are fail better luck next time");
        	
		}
}
