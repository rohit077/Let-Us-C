#include <stdio.h>
int main()
{
	char string[1];
	printf("Enter a string\n");
	scanf("%s",string);
	printf("\n%s\b",string);
	return 0;
}
