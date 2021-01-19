#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d;
	float xp,xn;
	printf("Enter the value of a,b,c\t");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	printf("Discriminant is %d\n",d);
	xp=(-b+sqrt(d))/(2*a);
	xn=(-b-sqrt(d))/(2*a);
	if(d<0)
		{
		xp=(-b+sqrt(-d))/(2*a);
		xn=(-b-sqrt(-d))/(2*a);
		}
		else
		{
		xp=(-b+sqrt(d))/(2*a);
		xn=(-b-sqrt(d))/(2*a);
		}
	if(d==0){
		printf("Output is %f,%f\n",xp,xp);
	}
	else if(d>0){
	printf("Output is %f,%f\n",xp,xn);
	}
	else if(d<0){
	printf("Output is %f+i,%f+i\n",xp,xn);
	}

return 0;
}
