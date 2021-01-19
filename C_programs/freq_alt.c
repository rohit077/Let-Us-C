#include <stdio.h>
void freq(int* f, int size){
//int size=sizeof(f)/sizeof(f[0]);//size++;
int g,count;
printf("\n%d\n",size);
for(int x=0;x<size;x++){
	g=*(f+x);count=0;
	if(*(f+x)!=-522715135)
	{
	for(int y=0;y<size;y++){
		if(*(f+y)==-522715135)
		{}
		else if(*(f+y)==g){
		count++;
		*(f+y)=-522715135;//-((2^8)-1)
		//*(f+x)="/u000";}
	}
	printf("%d occures %d times\n",g,count);
	}
}}
}

int main(){
int o,f;
printf("Enter the number to enter in the array\n");
scanf("%d",&o);
int arr[o];
for(f=0;f<o;f++){
	printf("\narr[%d]=",f);
	//scanf("%[^\n]*%c",arr[f][0]);
	scanf("%d",(arr+f));
}
freq(arr,o);
return 0;
}


