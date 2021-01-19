#include <stdio.h>
int main(){
int n,i,j,c;
printf("Enter a range");
scanf("%d",&n);
for (i=1;i<=n;i++){
	c=0;
	for (j=2;j<i;j++){
		if(i%j==0){
		c++;
		}	
	}

	if(c==0){
	printf("\n%d is Prime",i);
	}
	else{
	printf("\n%d Not prime",i);
	}
}
return 0;
}
