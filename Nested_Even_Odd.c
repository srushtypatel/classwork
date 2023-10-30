//number divisible by 5
//number divisible by 3
//number divisible by 5 & 3
//number not divisible by 5 or 3


#include<stdio.h>
main()
{
	int  num;
	
	printf("\n\n\t Enter any number:");
	scanf("%d",&num);
	
	if(num%5==0)
	{
		if(num%3==0)
		printf("\n\n\t the number is divisible by 3 and 5");
		
		else 
		printf("\n\n\t the number is only divisible by 5");
	}
	
	else if(num%3==0)

	{
		if(num%5==0)
		printf("\n\n\t the number is divisible by 3 and 5");
		
		else 
		printf("\n\n\t the number is only divisible by 3");
	}

       else 
       printf("\n\n\t this number is not divisible by 3 & 5 ");

}
