#include <stdio.h>
#include <math.h>
int main(){
int n,i,dig,rev,sto,p;
printf("Enter a number");
scanf("%d",&n);
i=0;sto=n;
p=-1;
while(n>0){
p++;
n=n/10;
}
n=sto;
while(n>0){
dig=n%10;
n=n/10;
rev=rev+(pow(10,(p-i))*dig);
i++;
}
printf("reverse of %d is %d\n",sto,rev);
return 0;
}
