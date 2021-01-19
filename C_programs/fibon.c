#include <stdio.h>
int ffibo(int);
int main(){
int res,inp;
printf("Enter a number to find fibonaci upto\n");
scanf("%d",&inp);
printf("\n");
for(int p=0;p<=inp;p++)
printf("%3d,",ffibo(p));
printf("\n");
return(0);
}
int ffibo(int f){
if(f==0)
return 0;
else if(f==1)
return 1;
else
return(ffibo(f-1)+ffibo(f-2));
}
