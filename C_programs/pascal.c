#include <stdio.h>
int main(){
int i,j,n,k,f,f1,f2,f3,s;
printf("Enter the number of rows");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
	for(j=i;j<(n-i-1);j++){
		printf("   ");
		for(k=0;k<=i;k++){
				f1=f2=f3=1;
				for (f=1;f<=i;f++)
				{f1=f1*f;}
				for (f=1;f<=(i-j);f++)
				{f2=f2*f;}
				for (f=1;f<=j;f++)
				{f3=f3*f;}
				s = (f1/(f2*f3));
				printf("%6d",s);
			
	printf("\n");
		}
	}
}
return 0;
}
