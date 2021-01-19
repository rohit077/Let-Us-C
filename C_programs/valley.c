#include <stdio.h>
int main(){
int rows,i,j,k,l,n1;
printf("Enter the rows\n");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
	for(j=1;j<=i;j++){
		printf("*");
	}
	for(k=((2*i)-1);k<=(2*rows-3);k++){
		printf(" ");}
	if(i==rows){
	 	n1=i-1;}
	else{
		n1=i;}
	
	for(l=1;l<=n1;l++){
	printf("*");}
	
	printf("\n");
}
return 0;
}
