#include<stdio.h>
main() {
	int a,k;
	
	printf("enter a number :");
	scanf("%d",&a);
	printf("enter k second number :");
	scanf("%d",&k);
	
	if(a>k)
	{
		printf("a is big %d",a);
	}
	else{
		printf("k is big %d",k);
	}
}
