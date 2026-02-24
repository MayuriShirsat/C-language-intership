#include<stdio.h>
#include<string.h>
int main(){
	char name[100]="mayuri";
	char revname[100],a[2];
	int i;
	for(i=(strlen(name)-1);i>=0;i--){
		a[0]=name[i];
		a[1]='\0';
		strcat(revname,a);
	}
	printf("%s\n",revname);
}
