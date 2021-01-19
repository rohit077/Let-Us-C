#include <stdio.h>
void vowelchk(char* f){
int i=0,size;
//puts(f);
	for(i=0;f[i]!='\0';i++);
	printf("size =%d",i);
	for(i=0;f[i]!='\0';i++){
		switch(f[i]){
		case 'A':case 'E':case 'I':case 'O':case 'U':case 'a':case 'e':case 'i':case 'o':case 'u':
		{printf("\n%c is a vowel\n",f[i]);break;}
		default:{printf("\n%c is a consonent\n",f[i]);}}
	}
}
int main(){
int size=0;
char s[10];
printf("Enter a string:\t");
scanf("%[^\n]",s);
vowelchk(s);
return 0;
}

