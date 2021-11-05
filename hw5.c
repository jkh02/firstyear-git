#include <stdio.h>

int odd(int a);
int even(int a);

int odd(int a)
{
	if (a % 2 == 1)
		printf(" %d", a);
	return 0;
}
int even(int a)
{
	if (a % 2 == 0)
		printf(" %d", a);
	return 0;
}
int main(void)
{
	int i;
	int arr[5];
	int num1, num2, num3, num4, num5;
	int a[10] = {0};
	printf("5개의 정수를 입력하세요:");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	arr[0] = num1, arr[1] = num2, arr[2] = num3, arr[3] = num4, arr[4] = num5;

	printf("홀수 출력:");
	for (i = 0; i < 5; i++)
	{
		odd(arr[i]);
	}
	printf("\n");
	printf("짝수 출력:");
	for (i = 0; i < 5; i++)
	{
		even(arr[i]);
	}
}