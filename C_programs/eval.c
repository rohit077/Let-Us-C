#include <stdio.h>
#include <math.h>
int main(){
int i,j,n,x,s;
s=1;
double sum,fact,sig;
printf("Enter the range");
scanf("%d",&n);
printf("and x");
scanf("%d",&x);
	for(i=1;i<=n;i+=2){
	fact=1.0;
		for (j=1;j<=i;j++){
			fact=fact*j;
		}
	if(s==1){
	sig=(pow(x,i)/fact);
	s=0;}
	else{
	sig=-(pow(x,i)/fact);
	s=1;}
	sum=sum+sig;
	}
printf("The result is %lf",sum);
return 0;
}
