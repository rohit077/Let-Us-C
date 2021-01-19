#include <stdio.h>
#include <math.h>
int main(){
int n,i,dig,sum,sto;
printf("Enter a number");
scanf("%d",&n);
i=0;dig=0;sum=0;sto=n;
while(n>0){
dig=n%10;
n=n/10;
sum=sum+pow(dig,3);
i++;
}
if(sum==n){printf("%d is an armstrong number",sto);}
else{printf("%d is not an armstrong number",sto);}
return 0;
}
