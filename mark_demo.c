#include<stdio.h>
main()
{
	int Roll_num , marks;
	
	printf("\n\n\t Enter the roll number:");
	scanf("%d",&Roll_num);
	
	printf("\n\n\t Enter the marks of subject:");
	scanf("%d",&marks);
	
	if(marks>=70)
	printf("\n\n\t you are pass with discriction...");
	
    else if(marks>=60)
	printf("\n\n\t you are pass with first class");
	
	else if(marks>=50)
	printf("\n\n\t you are pass with second class");
	
    else if(marks>=40)
	printf("\n\n\t you are pass");
	
	else
	printf("\n\n\t you are fail");
}
