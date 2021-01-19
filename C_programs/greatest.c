#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter three number\t");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z){
		printf("x=%d is the largest number",x);
	}
	else if(y>x && y>z){
		printf("y=%d is the largest number",y);
	}
	else if(z>x && z>y){
		printf("z=%d is the largest number",z);
	}
	else{
		printf("Two or more numbers are equal");
	}
return 0;
}
