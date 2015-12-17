#include <stdio.h>

int main(void)
{
	char arr[20] = {'o', 'h', ' ', 'h', 'a', 'i', '\n'};
	int i, *str, count;

	strcpy(str, arr);
	printf("How many times? ");
	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		printf("[%d] - %s", i, str);
	}
}
