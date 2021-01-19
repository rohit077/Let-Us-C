#include <stdio.h>
int main()
{
	int num,sum,t;
	printf("Enter a number\n");
	scanf("%d",&num);
	sum=0;
	t=0;
	do
	{
		t=num%10;
		num=num/10;
		sum=sum+t;
	}while(num>0);
	printf("%d\n",sum);
	return 0;
}
		
