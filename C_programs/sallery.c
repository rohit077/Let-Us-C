#include <stdio.h>
int main()
{ 
	float g,a;
	printf("Enter the sallery\n");
	scanf("%f",&a);
	printf("\nBasic Sallery is %f :",a);
	g=(.74*a)+(.15*a)+a;
	printf("\nThe gross sallery is %f\n",g);
	return 0;
}
