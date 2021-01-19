#include <stdio.h>
int main()
{
	int l;
	int b;
	int area;
	int peri;
	printf("Enter the Length and breadth\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	peri=2*(l+b);
	printf("\nThe area is %d and the perimeter is %d \n",area,peri);
return 0;
}
