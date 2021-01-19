#include <stdio.h>
int main()
{
	char string[1];
	printf("Enter a string\n");
	scanf("%s",string);
	printf("\nThe length of the given string %s is %d\n",string,printf(string));
	return 0;
}
