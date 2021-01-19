#include <stdio.h>
int main(){
int i,j,k,l,f,n;
	printf("Enter the size\n");
	scanf("%d",&n);
		for(i=1;i<=n;i++){
		f=i;
		
		for(j=n-i;j>=0;j--){
			printf(" ");}
			
		for(k=1;k<=i;k++){
			printf("%d",f++);}
		f--;	
		for(l=1;l<i;l++){
			printf("%d",--f);}
				
		printf("\n");
		}
return 0;
}
