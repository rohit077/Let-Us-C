#include <stdio.h>
int facto(int);
int main(){
int res,inp;
printf("Enter a number to find the factorial of\n");
scanf("%d",&inp);
res=facto(inp);
printf("The factorial  of %d is %d\n",inp ,res);
return(0);
}
int facto(int f){
if(f==0)
return 1;
else
return(f*facto(f-1));
}
