#include <stdio.h>
int main(){
int n,dig,i,sum,sto;
printf("Enter a number");
scanf("%d",&n);
i=0;dig=0;sum=0;sto=n;
while(n>0){
dig=n%10;
n=n/10;
sum=sum+dig;
}
printf("\nSum of digits of %d is %d\n",sto,sum);
return 0;
}
