#include <stdio.h>
#include <math.h>
int main(){
int n,dig,count,fin,chk,flag;
dig=0;count=0;fin=0;flag=0;
printf("Enter the number to convrt to decimal\n");
scanf("%d",&n);
chk=n;
	while (chk>0){
	dig=chk%10;
		if(dig==1){
			flag=1;
		}
		else if(dig==0){
			flag=1;
		}
		else{flag=0;
		break;}
	chk=chk/10;
	}
	
	if(flag==1){
		while (n>0){
		dig=n%10;
			if(dig==1){
				fin=fin+pow(2,count);
			}
		count++;
		n=n/10;
		}
	printf("%d\n",fin);
	}
	
	else{
	printf("\nInvalid Input\n");
	}
return 0;
}
