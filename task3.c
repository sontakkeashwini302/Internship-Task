#include<stdio.h>
#include<stdlib.h>

int main()
{
	int com, u;

	while (1)
	{
		printf("Enter 1: 'Rock'\n");	
		printf("Enter 2: 'Paper'\n");
		printf("Enter 3: 'Scissors'\n");
		printf("Enter you choice :");
		scanf("%d", &u);
		
		printf("\nComputer's choice: ");
		com = (rand()%3)+1;
		printf("%d\n", com);
		
		if(u==com)
			printf("TIE\n");
		
		if(u==1 && com==2)
			printf("computer wins\n");
		
		if(u==1 && com==3)
			printf("you win\n");
		
		if(u==2&& com==1)
			printf("you wins\n");
		
		if(u==2 && com==3)
			printf("computer win\n");
		
		if(u==3 && com==1)
			printf("computer wins\n");
		
		if(u==3&& com==2)
			printf("you wins\n");
		
		printf("------------------------------------------------\n");
	}
		return 0;
}


