 #include<stdio.h>
void main(){
	int i,n,largest;
	//the smalest element in the 1 d array.
	printf("Enter size of 1D array  ;",n);
	scanf("%d",&n);
	int a[n];
	printf("Enter element in array \n");
	for(i=0;i<n;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	largest = a[0];
	for(i=0;i<n;i++){
		if(largest<a[i]){
			 largest=a[i];
		}
	}
	printf("The largest element is %d : ",largest);
 
}
