#include <stdio.h>
int main(){
int a,b,mini,c,temp;
printf("Enteer the number of elements\n");
scanf("%d",&a);
int arr[a];
printf("Enter the elements\n");
	for(b=0;b<a;b++){
		scanf("%d",&arr[b]);
	}
	printf("Unsorted arrey\n");
	for(b=0;b<a;b++){
		printf("%d,",arr[b]);
	}	printf("\n");
	//sorting
	for(b=0;b<a;b++){
		mini=b;
		for(c=b+1;c<a;c++){
			if(arr[c]>arr[mini]){
			mini=c;
			}
		}
		temp=arr[b];
		arr[b]=arr[mini];
		arr[mini]=temp;
	}
	//print
	printf("Sorted arrey\n");
	for(b=0;b<a;b++){
		printf("%d,",arr[b]);
	}	printf("\n");
return 0;
}
