#include <stdio.h>
int main(){
int i,j,k,n;
	printf("Enter the size");
	scanf("%d",&n);
		for(i=1;i<=n;i++){
		
			for(j=n-i;j>=0;j--){
			printf(" ");}
			for(k=1;k<=i;k++){
			printf("*");}
			
		printf("\n");
		}
return 0;
}
