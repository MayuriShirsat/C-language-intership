#include<stdio.h>
#include<string.h>
int main(){
	char str1[100]="hello";
	char str2[200]="world";
	char str3[300];
	printf("Length of str1:%lu\n",strlen(str1));
	strcpy(str3,str1);
	printf("After coping str3=%s\n",str3);
	strcat(str1,str2);
	printf("After strcat str1=%s\n",str1);
	printf("%d\n",strcmp(str1,str2));
	if(strcmp(str1,str2)==0){
		printf("String are eqaul\n");
	}
	else{
		printf("Strings are not equal\n");
	}
}
