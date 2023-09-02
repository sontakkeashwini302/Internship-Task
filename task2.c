#include<stdio.h>

int main()
{
	while(1)
	{
		int principal,time;
		float rate,si;
		printf("\nEnter principal :");
		scanf("%d",&principal);
		printf("\nEnter Time Period :");
		scanf("%d",&time);
		printf("\nEnter Rate of Interest :");
		scanf("%f",&rate);
		si=(principal*time*rate)/100;
		printf("Simple Interest : %f",si);
		printf("\n\n----------------------------------");
		
	}
	return 0;
}
