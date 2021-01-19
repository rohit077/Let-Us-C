#include <stdio.h>
int main(){
int n,fac,i;
printf("Enter a number");
scanf("%d",&n);
fac=1;
for (i=1;i<=n;i++){
fac=fac*i;
}
printf("Factorial of %d is %d\n",n,fac);
return 0;
}
