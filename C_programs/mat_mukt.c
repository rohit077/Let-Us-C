#include <stdio.h>
int main(){
int inpr,inpc,a,b,l,k,f,i,y,max,inpbr,inpbc;

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
scanf("%d",&inpbr);
printf("Enter the colums of 1st matrix\n");
scanf("%d",&inpbc);
int arr2[inpr][inpc];
printf("Enter %d elements\n",(inpbr*inpbc));
	for(k=0;k<inpbr;k++)
	{
		for(l=0;l<inpbc;l++){
				scanf("%d",&arr2[k][l]);
		}
	}
i=(inpr>inpc)?inpr:inpc;
y=(inpbr>inpbc)?inpbr:inpbc;
max=(i>y)?i:y;
int re[max][max];
a=sizeof(arr)/sizeof(arr[0]);
b=sizeof(arr2)/sizeof(arr2[0]);
	if(inpc==inpbr){
		for(k=0;k<inpc;k++)
		{
			for(l=0;l<inpbr;l++){
				re[k][l]=0;
				for(f=0;f<inpbr;f++){
					re[k][l]=re[k][l]+arr[k][l]+arr2[l][k];
				}
				//re[k][l]=arr[k][l]+arr2[k][l];
			}
		}
	}
	else{
	printf("Not possible\n");
	}
printf("The multiplication of two matrixes are\n");
for(k=0;k<inpc;k++)
	{
			for(l=0;l<inpbr;l++){
				printf("%9d\t",re[k][l]);
		}
		printf("\n");
	}
return 0;
}
