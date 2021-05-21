#include<stdio.h>
#include<cs50.h>

int main(void)
{
	float a = get_float("side 1\n");
	float b = get_float("side 2\n");
	float c = get_float("side 3\n");
	if((a*a + b*b == c*c) || (b*b + c*c == a*a) ||a*a + c*c == b*b)
		printf("Yes");
	else
		printf("No");
	
	return 0;
}