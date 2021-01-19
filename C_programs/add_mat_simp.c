#include <stdio.h>
int main(){
int inpr,inpc,a,b,l,k,max;

printf("Enter the rows of 1st matrix\n");
scanf("%d",&inpr);
printf("Enter the columns of 1st matrix\n");
scanf("%d",&inpc);
int arr[inpr][inpc];
printf("Enter %d elements\n",(inpr*inpc));
	for(k=0;k<inpr;k++)
	{
		for(l=0;l<inpc;l++){
				scanf("%d",&arr[k][l]);
		}
	}

printf("Enter the rows of 2nd matrix\n");
scanf("%d",&inpr);
printf("Enter the colums of 1st matrix\n");
scanf("%d",&inpc);
int arr2[inpr][inpc];
printf("Enter %d elements\n",(inpr*inpc));
	for(k=0;k<inpr;k++)
	{
		for(l=0;l<inpc;l++){
				scanf("%d",&arr2[k][l]);
		}
	}
max=(inpr>inpc)?inpr:inpc;
int re[max][max];
a=sizeof(arr)/sizeof(arr[0]);
b=sizeof(arr2)/sizeof(arr2[0]);
	if(a==b){
		for(k=0;k<a;k++)
		{
			for(l=0;l<a;l++){
				re[k][l]=arr[k][l]+arr2[k][l];
			}
		}
	}
	else{
	printf("Not possible\n");
	}
printf("The sum of two matrixes are\n");
for(k=0;k<a;k++)
	{
			for(l=0;l<a;l++){
				printf("%d\t",re[k][l]);
		}
		printf("\n");
	}
return 0;
}
