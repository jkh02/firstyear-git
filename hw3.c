#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter a number:");
	scanf("%d", &num);

	int count = 1;
	int cheak = 0;
	while (count <= num);
	{
		if (num % count == 0)
		{
			cheak++;
		}
		count++;
	}

	if (cheak == 2)
	{
		printf("prime number");
	}
	
	if (cheak != 2)
	{
		printf("not prime number");
	}
	return 0;
}