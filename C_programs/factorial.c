#include <stdio.h>
int fact(int)
int main(){
int inp,res;
printf("Enter a number to find factorial\n");
scanf("%d",&inp);
res=fact(inp);
printf("The factorial of %d is %d",inp,res);
}
int fact(int c){
int x=1;
for(inti=1;i<=c;i++){x=x*i}
return x;
}
