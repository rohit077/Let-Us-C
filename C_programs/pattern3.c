#include <stdio.h>
int main(){
int rows,i,j,c;
printf("Enter a number of rows\n");
scanf("%d",&rows);

for(i=1;i<=rows;i++){
	c=65;
	for(j=rows-i;j>0;j--){
	printf("%c",(char)c);
	c++;
	}
	printf("\n");
	}
return 0;
}
