#include <stdio.h>

int main(void)
{
	char ch[100];
	int i = 0;

	printf("Input> ");
	gets(ch);

	for (i = 0;ch[i];i++)
	{
		const int diff = 'a' - 'A';
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] = ch[i] + diff;
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - diff;
		else
			continue;
	}
	printf("Output> ");
	puts(ch);

	return 0;
}