#include<stdio.h>
int main (){
	char str[100];
 	int freq[256]={0};
	int i =  0;
 
	
	printf("Enter  any string: ");
	scanf(" %[^\n]", str);
 printf("\n");
	while(str[i] !='\0'){
		 freq[str[i]]++;
		i++;
	}
	printf(" frequency of each letter: \n");
	for(i = 0; i < 256; i++){
        if(freq[i] > 0){
            printf(" %c = %d\n", i, freq[i]);
        }
    }
 	return 0;
}
