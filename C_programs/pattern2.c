#include <stdio.h>
int main(){
int rows,i,j,k;
printf("Enter the rows\n");
scanf("%d",&rows);
//k=1;
for(i=1;i<=rows;i++){

	if(i%2==1){k=1;}
	else{k=0;}
	
	for(j=1;j<=i;j++){
	if(k==1)
		{printf("%d",k--);}
	else
		{printf("%d",k++);}
	}
	printf("\n");
	}
	
return 0;
}
