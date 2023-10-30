#include<stdio.h>
main()
{
	//int a[10]; //array declaration
	int a[5]={11,60,33,76,10};
	int i,sum=0;
	
	for(i=0; i<5;i++)
	{
		printf("\n\n\t a[%d]:",i);
		scanf("%d",&a[i]);
		
		sum=sum+a[i];	
	
	}
	printf("\n\n...............................................");
	printf("\n\n  sum of value:%d",sum);
}
