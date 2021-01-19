#include <stdio.h>
int main(){
int n,i;
printf("Enter a range");
scanf("%d",&n);
for (i=1;i<=n;i++){
if(i%7!=0){
printf("\n%d",i);}
}
return 0;
}
