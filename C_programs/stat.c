#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	double vari,sd,sum,mean;
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
	mean=sum/a;
	printf("\nMean of all the elements of the array are=%lf",mean);
	sum=0.0;
	for(b=0;b<a;b++){
		sum=sum+pow((c[b]-mean),2);
	}
	vari=sum/a;
	printf("\nVariance of all the elements of the array are=%lf",vari);
	sd=sqrt(vari);
	printf("\nStandard deviation of  of the array are=%lf\n",sd);
	return 0;
}
