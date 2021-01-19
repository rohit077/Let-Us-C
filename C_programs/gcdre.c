#include <stdio.h>
int gcd(int, int, int);
int main(){
int a,b,max,gc;
printf("Enter two numbers\n");
scanf("%d",&a);
scanf("%d",&b);
max=(a>b)?a:b;
gc=gcd(a,b,max);
printf("\nGCD two numbers is %d\n",gc);
return(0);
}
int gcd(int a,int b,int m){
if(a%m==0 && b%m==0){
return m;
}
else{
gcd(a,b,(m-1));
}
}
