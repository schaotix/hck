#include <stdio.h>

int main(void)
{
	char buff[] = {'h', 'e', 'l', 'l', 'o', '\n'};
	char *b;

	b = buff;

	printf("%s", b);
}
