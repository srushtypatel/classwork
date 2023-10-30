#include<stdio.h>
main()
{
	int i,sum=0;
	
	while(i<=10)
	{
		sum=sum+i;
		i++;
		printf(" \n %d",sum);
		
		i=i+1;
	}
	printf("%d",sum);
}
