#include <stdio.h>
int main(){
int a,b,n,f,i;
printf("Enter a range");
scanf("%d",&n);
a=1;b=1;f=0;
printf("%d",a);
for (i=0;i<n;i++){
f=a+b;
b=a;
a=f;
printf("+%d",b);
}
printf("\n");
return 0;
}
