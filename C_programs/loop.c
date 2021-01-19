#include <stdio.h>
#include <math.h>
/*
6x² + 11x - 35 = 0
2x² - 4x - 2 = 0
-4x² - 7x +12 = 0
20x² -15x - 10 = 0
x² -x - 3 = 0
5x² - 2x - 9 = 0
3x² + 4x + 2 = 0
-x² +6x + 18 = 0*/
int main(){
int xp,xn,d;
int a[]={6,2,-4,20,1,5,3,-1,1};
int b[]={11,4,-7,-15,-1,-2,4,6,2};
int c[]={-35,-2,12,-10,-3,-9,2,18,1};
int i=0;
	for (i=0;i<9;i++)
	{	
		printf("\n(%d)x^2+(%d)x+(%d)=0\n",a[i],b[i],c[i]);
		d=(b[i]*b[i])-(4*a[i]*c[i]);
		printf("Discriminant is %d\n",d);
		if(d<0)
		{
		xp=(-b[i]+sqrt(-d))/(2*a[i]);
		xn=(-b[i]-sqrt(-d))/(2*a[i]);
		}
		else
		{
		xp=(-b[i]+sqrt(d))/(2*a[i]);
		xn=(-b[i]-sqrt(d))/(2*a[i]);
		}
		if(d==0){
			printf("Output is %d\n",xp);
		}
		else if(d>0){
			printf("Output is %d,%d\n",xp,xn);
		}
		else if(d<0){
			printf("Output is %d+i,%d+i\n",xp,xn);
		}
	}
return 0;
}
