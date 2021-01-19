#include <stdio.h>
int main()
{
	int a,b,sump,sumn;
	printf("Enter the number of elements\n");
	scanf("%d",&a);
	int c[a];sump=sumn=0;
	printf("Enter the elements\n");
	for(b=0;b<a;b++){
		scanf("%d",&c[b]);
	}
	for(b=0;b<a;b++){
		if(c[b]>0){
		sump+=c[b];}
		else{
		sumn+=c[b];
		}
	}
	printf("Difference in magnitude of all the elements of the array are=%d\n",(sumn+sump));
	return 0;
}
