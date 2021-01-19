#include <stdio.h>
int freq(int* f, int size,int element){
int count=0;
for(int i=0;i<size+1;i++){
	if(f[i]==element){
		count++;
		f[i]=-99999;
	}
}
return count;
}

void freq_arr(int* f,int size){
int res,ele;
//int size=sizeof(f)/sizeof(f[0]);
//printf("\n\n%d",size);
for(int i=0;i<=size;i++){
ele=f[i];
if(ele>0){
		res=freq(f,size,ele);
		printf("%d occures %d times\n",ele,res);\
		}
	}
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
freq_arr(arr,o-1);
return 0;
}


