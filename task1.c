#include<stdio.h>
#include<string.h>
void main()
{
	int num,i,n,sum=0,temp;
	while(1)
	{
	printf("\nEnter the number to check if the number is armstrong: ");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+(temp*temp*temp);	
		num=num/10;
	}
	if(sum== n)
	{
		printf("The number %d is armstrong number\n",sum);
	}
	else
	{
		printf("The number is not armstrong number\n");
	}
}
}
