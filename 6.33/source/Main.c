#include <stdio.h>

void stringReverse(char *s)
{
	if (*s != '\0')
	{
		stringReverse(s + 1);
		printf("%c", *s);
	}
}

int main()
{
	char myString[] = "abcde";
	stringReverse(myString);
	printf("\n");
	return 0;
}
