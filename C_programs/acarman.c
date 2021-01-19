#include  <stdio.h>
int acarman(int m, int n);
int main(){
int a=0;int c[3];
scanf("%d %d",&c[1],&c[2]);
a=acarman(c[1],c[2]);
printf("\nThe acarman of %d and %d is %d\n",c[1],c[2],a);
return 0;
}
int acarman(int m, int n){
if(m==0){
return (n+1);
}
else if(n==0 && m!=0){
acarman(m-1,1);
}
else{
acarman(m-1,acarman(m,n-1));
}
}

