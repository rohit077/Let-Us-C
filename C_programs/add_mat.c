#include <stdio.h>
//int* add(int *,int *)
void fill(int[0][0] ,int);
void display(int[0][0] ,int);

int main(){
int inp,a,b,k,l;

printf("Enter the order of 1st matrix\n");
scanf("%d",&inp);
int arr[inp][inp];
fill(arr,inp);
display(arr,inp);

printf("Enter the order of 2nd matrix\n");
scanf("%d",&inp);
int arr2[inp][inp];
fill(arr2,inp);
display(arr2,inp);

int re[inp][inp];
//int y=add(arr,arr2)
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
display(re,inp);
return 0;
}

void fill(int u[0][0],int o){
int l,k;
printf("Enter %d elements\n",(o*o));
	for(k=0;k<o;k++)
	{
		for(l=0;l<o;l++){
				scanf("%d",&u[k][l]);
				//printf("%d\t",u[k][l] );
		}
	}
	//display(u,o);
}

void display(int u[0][0],int o){
int l,k;
	for(k=0;k<o;k++)
	{
			for(l=0;l<o;l++){
				printf("%d\t",u[k][l]);
		}
		printf("\n");
	}
}


