#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	double sd[5] = { 0,0,0,0,0 };
	int sum=0;
	double num1, num2, num3, num4, num5;
	double ave=0, var=0, std=0;
	printf("Enter 5 real numbers:");
	scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);
	sd[0] = num1;
	sd[1] = num2;
	sd[2] = num3;
	sd[3] = num4;
	sd[4] = num5;
	for (i = 0;i < 5;i++)
	{
		sum = sum + sd[i];
	}
	ave = sum / 5;
	for (i = 0;i < 5;i++)
	{
		var = var + (sd[i] - ave) * (sd[i] - ave);
	}
	var = var / 5;
	std = sqrt(var);
	printf("Standard Deviation = %f", std);
}