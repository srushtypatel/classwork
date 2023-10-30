#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t enter the number:");
	scanf("%d",&num);
	
	if(num<0)
	{
	num=num*-1;
	printf("\n\n\t possitive number is... %d",num);
    }
	else
	{
	num=num*-1;
	printf("\n\n\t nagetive number is. ..%d",num);
    }
}
