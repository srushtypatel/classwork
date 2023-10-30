#include<stdio.h>
main()
{
	int rollno, total;
	int s1,s2,s3,s4,s5;
	float per;
	
	printf("\n\n\t enter your roll number:");
	scanf("%d",&rollno);
	
	printf("\n\n\t enter the mark of s1:");
	scanf("%d",&s1);
	
	printf("\n\n\t enter the mark of s2:");
	scanf("%d",&s2);
	
	printf("\n\n\t enter the mark of s3:");
	scanf("%d",&s3);
	
	printf("\n\n\t enter the mark of s4:");
	scanf("%d",&s4);
	
	printf("\n\n\t enter the mark of s5:");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t..........................");
	printf("\n\n\t rollno :%d",rollno);
	printf("\n\n\t You got percentage :%.2f %%",per);
	 
	if(s1>40,s2>40,s3>40,s4>40,s5>40)
	{
	 
	if(per>80)
	printf("\n\n\t you got A++");
	
	else if(per>70)
	printf("\n\n\t you got A");
	
	else if(per>60)
	printf("\n\n\t you got B");
	
	else if(per>50)
	printf("\n\n\t you got C");
	
	}
	
	else
	printf("\n\n\t you are fail");
	
} 
