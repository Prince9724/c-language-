

#include<stdio.h>
void main (){
		int score;
	char grade;
	printf("enter your score: ");
	scanf("%d",&score);
		grade = (score>=90)?'A':
 			(score>=80)?'B':
 			(score>=70)?'C':
 			(score>=60)?'D':
 			(score>33)?'E':'F'; 			 
 	printf("your grade is = %c ", grade);
	
	
	
	
}
