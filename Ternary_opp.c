#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("\n\n\t Input Number1:");
	scanf("%d",&x);
	
	
	printf("\n\n\t Input Number2:");
	scanf("%d",&y);
	
	z=x>y?x:y;
	
	printf("\n\n\t The bigger number is:%d",z);
}
