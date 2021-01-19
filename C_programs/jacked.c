#include <stdio.h>
int main(){
int arr[]={1,1,1,1,2,1,1,3,3,1,1,4,6,4,1};
int i,j,k,l;
i=j=k=l=0;
for(i=0;i<5;i++){
	for(j=0;j<9;j++){
		if((i+j)==4){
		printf("%d",arr[i]);continue;}
		else if((i+j)==5){
		printf(" ");continue;}
		else if((i+j)==7){
		printf(" ");continue;}
		else if((i+j)==9){
		printf(" ");continue;}
		else if((i+j)==11){
		printf(" ");continue;}
		else{printf("%d",arr[i]);}	
		i++;			
		}
	printf("\n");
}
return 0;
}
