#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	printf("두 정수를 입력하세요 :");
	scanf_s("%d %d", &num1, &num2);
	num3 = num1 & num2;
	num4 = num1 | num2;
	num5 = num1 ^ num2;
	printf("10 & 15 = %d\n", num3);
	printf("10 | 15 = %d\n", num4);
	printf("10 ^ 15 = %d\n", num5);

	return 0;




}
