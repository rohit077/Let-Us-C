#include <stdio.h>
int main(){
	int x;
	printf("\nEnter the Year\t");
	scanf("%d",&x);
	if(x%400==0 ){
	printf("\nThe give year %d is a leap year",x);
	}
	else if(x%400==0 ){
	printf("\nThe give year %d is not a leap year",x);
	}
	else if(x%4==0 ){
	printf("\nThe give year %d is a leap year",x);
	}
	else{
	printf("\nThe give year %d is  not a leap year",x);
	}
return 0;
}
