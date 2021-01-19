#include <stdio.h>
void swap(int* f,int* o){
int temp=*o;
*o=*f;
*f=temp;
}

int main(){
int a,b;
printf("Enter two number to swap\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Before swapping\n%d\t\t%d",a,b);
swap(&a,&b);
printf("\nAfter swapping\n%d\t\t%d\n",a,b);
return 0;
}
