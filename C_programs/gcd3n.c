#include <stdio.h>
int gcd(int, int, int);
int main(){
int a,b,c,max,gc,gc2;
printf("Enter 3 numbers\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
max=(a>b)?a:b;
gc=gcd(a,b,max);
max=(gc>c)?gc:c;
gc=gcd(gc,c,max);
printf("\nGCD 3 numbers is %d\n",gc);
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
