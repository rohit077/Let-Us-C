#include <stdio.h>
#include <string.h>
int comp(char* x);

int main(){
char inp[100][100];char t[100];int ij,y,i,i;
printf("\nEnter the number of sting to be entered:\n");
scanf("%d",&ij);
int arr[ij];
for(y=0;y<ij+1;y++){
gets(inp[y]);
}
printf("\n");
for(y=0;y<ij+1;y++){
arr[y]=comp(inp[y]);
}

for(i=0;i<ij;i++){
for(j=0;j<ij-i-1;j++){
if(arr[j]<arr[j+1]){
t=arr[j];
arr[j]=arr[j+1];
strcpy(inp[j],t);
strcpy(inp[j],inp[j+1]);
strcpy(t,inp[j+1]);
arr[j+1]=t;
}
}

for(y=0;y<ij+1;y++){
puts(inp[y]);
}

return 0;
}

int comp(char* xp){
int x=0,res=0;
for(x=0;xp[x]!='\0';x++){
res=res+(int)xp[x];
}
return res;
}
}
