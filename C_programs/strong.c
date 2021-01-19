#include <stdio.h>
int strong(int);
int facto(int);
int main(){
int res,inp;
printf("Enter a number to find if it is strong or not\n");
scanf("%d",&inp);
res=strong(inp);
if(res)
printf("The number %d is a strong\n",inp);
return(0);
}

int strong(int f){
int bkp=f;int dig,sum=0,re;
while(f>0){
dig=f%10;
re=facto(dig);
sum=sum+re;
f=f/10;
}
//printf("%d",sum);
if(sum==bkp){
return (1);
}
else{
return (0);
}
}

int facto(int f){
if(f==0)
return 1;
else
return(f*facto(f-1));
}
