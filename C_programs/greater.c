#include <stdio.h>
int greater(int* f,int* o){
int k=(*f>*o)?*f:*o;
return k;
}

int main(){
int a,b;
printf("Enter two number \n");
scanf("%d",&a);
scanf("%d",&b);
printf("\n%d is greater\n",greater(&a,&b));
return 0;
}
