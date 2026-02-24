#include<stdio.h>
#include<string.h>
int main(){
	char name[200]="madamassd";
	char revname[200];
	int i;
	char a[2];
	revname[0]='\0';
			
	for(i=(strlen(name)-1);i>=0;i--){
		a[0]=name[i];
		a[1]='\0';
		strcat(revname,a);
	}
	if(strcmp(name,revname)==0){
		printf("Palindrom\n");
	}
	else{
		printf("Not Palindrom\n");
	}
}
