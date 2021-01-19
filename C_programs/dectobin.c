#include <stdio.h>
#include <math.h>
int main(){
int n,dig,count;
dig=0;count=0;
printf("Enter the number to convrt to binary\n");
scanf("%d",&n);
while (n>0){
if(n%2==0){
dig=dig+0;
n=n/2;
}
else if(n%2!=0){
dig=dig+pow(10,count);
n=n/2;
}
count++;
}
printf("%d\n",dig);
return 0;
}
