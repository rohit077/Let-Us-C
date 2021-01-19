#include <stdio.h>
int main(){
	int x,n,y;
	printf("Enter the value of x and n\t");
	scanf("%d%d",&x,&n);
	switch(n){
	case 1:{
		y=1+(x*x);break;
	}
	case 2:{
		y=1+(x/n);break;
	}
	case 3:{
		y=1+(2*x);break;
	}
	default:{
		y=1+(n*x);
	}
	}
printf("Output is %d\n",y);
return 0;
}
