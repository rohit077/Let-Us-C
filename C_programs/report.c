#include <stdio.h>
int main(){
	int x;
	char grade;
	printf("Enter the Marks\t");
	scanf("%d",&x);
	if(x>=90 && x<=100){
		grade='O';
	}
	else if(x>=80 && x<=90){
		grade='E';
	}
	else if(x>=70 && x<=80){
		grade='A';
	}
	else if(x>=50 && x<=60){
		grade='C';
	}
	else if(x>=40 && x<=50){
		grade='D';
	}
	else if(x>=40 && x<=0){
		grade='F';
	}
	else{
		printf("Invalid input");
	}
printf("\nGrade is %c\n",grade);
return 0;
}
