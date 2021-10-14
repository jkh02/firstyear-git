#include <stdio.h>

int binary(int num)
{
	int remainder;
	if (num >= 2)
	{
		remainder = num % 2;
		num = num / 2;
		binary(num);
		printf("%d", remainder);
		
	}
	else
	{
		printf("%d", num);
		return 1;
	}
}

int main(void)
{
	int num=0;
	printf("please enter a number:");
	scanf("%d", &num);
	binary(num);

	return 0;
}