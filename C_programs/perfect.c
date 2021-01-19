#include <stdio.h>
int main(){
int n,i,per;
printf("Enter a number");
scanf("%d",&n);
per=0;
for (i=1;i<n;i++){
if(n%i==0){
per=per+i;
}
}
if(per==n){printf("%d is a perfect number\n",n);}
else{printf("%d is not a perfect number\n",n);}
return 0;
}
