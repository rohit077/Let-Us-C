#include <stdio.h>
int main(){
int a[6]={1,6,9,2,1,3};
int i,j,k,t;
//printf("Enter 6 values");
//for(i=1;i<=6;i++){
//scanf("%d",(a+(i*4)));}
//for(i=1;i<=6;i++){
//printf("%d,",*(a+(i*4)));}
printf("6 values are \n");
for(i=0;i<6;i++){
printf("%d,",a[i]);
}printf("\n");

for(j=0;j<6;j++){
	for(k=0;k<i;k++){
		if(a[k]>a[k+1]){t=a[k];a[k]=a[k+1];a[k+1]=t;}//printf("check");
	}
}
printf("6 values after sorting are \n");
for(i=0;i<6;i++){
printf("%d,",a[i]);
}printf("\n");

return 0;
}
