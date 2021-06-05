#include <stdio.h>
#include <cs50.h>

int main(void) {
	int t = get_int("Enter type of pattern (1 or 2) ");
	int n = get_int("Number of rows");
	if(t == 1) 
	{
		for(int i=n; i>0; i--)
		{
			for(int j=0; j<i; j++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	else if(t == 2)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=i; j<n; j++)
			{
				printf(" ");
			}
			for(int j=1; j<=i; j++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	else
	{
		printf("Invalid Input!");
	}
}