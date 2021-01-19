#include <stdio.h>
int main(){
	int x,i;
	char grade;
	printf("Enter the Marks\t");
	scanf("%d",&x);
	i=x/10;
	switch(i){
	case 9:
	grade='O';
	break;
	case 8:
	grade='E';
	break;
	case 7:
	grade='A';
	break;
	case 5:
	grade='C';
	break;
	case 4:
	grade='D';
	break;
	default:
	grade='F';
}
printf("\nGrade is %c\n",grade);
return 0;
}
