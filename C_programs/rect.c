#include <stdio.h>
int main()
{
	float area,peri,pi,l,b,r;
	printf("Enter the Length and breadth\n");
	scanf("%f%f",&l,&b);
	area=l*b;
	peri=2*(l+b);
	printf("\nThe area is %f and the perimeter is %f \n",area,peri);
	printf("Enter the  radius\n");
	scanf("%f",&r);
	pi=22/7;
	area=pi*r*r;
	peri=2*pi*r;
	printf("\nThe area is %f and the perimeter is %f \n",area,peri);
return 0;
}
