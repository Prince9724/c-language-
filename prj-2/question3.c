
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
        
        
        if(grade=='A'||grade=='B'||grade=='C'||grade=='D'){
        	printf("Your grade is : %c",grade);
        	printf(" .exelent work! you are eligible for next level.");
		}
		else{
			printf("Please try again next time. if the grade is : F .");
		}
}
