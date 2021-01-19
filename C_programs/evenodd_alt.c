#include <stdio.h>

void evenodd(int* f,int size){
int even,odd;
even=0;odd=0;
for(int i=0;i<=size;i++){
if(f[i]%2==0){
		even++;
		}
		else{
		odd++;
		}
	}
	printf("\nThe odd elements are %d and even elements are %d\n",odd,even);
}
int main(){
int o,f;
printf("Enter the number to enter in the array\n");
scanf("%d",&o);
int arr[o];
for(f=0;f<o;f++){
	printf("\narr[%d]=",f);
	scanf("%d",(arr+f));
}
printf("\n");
evenodd(arr,o-1);
return 0;
}

