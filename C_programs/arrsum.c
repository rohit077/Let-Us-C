#include <stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter the number of elements\n");
	scanf("%d",&a);
	int c[a];sum=0;
	printf("Enter the elements\n");
	for(b=0;b<a;b++){
		scanf("%d",&c[b]);
	}
	for(b=0;b<a;b++){
		sum+=c[b];
	}
	printf("Sum of all the elements of the array are=%d\n",sum);
	return 0;
}
