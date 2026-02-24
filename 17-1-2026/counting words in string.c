#include<stdio.h>
#include<string.h>
int main(){
	char name[100]="mayuri santosh";
	int i,count=1;
	for(i=0;i<strlen(name);i++){
		if(name[i]==' '){
			count++;
		}
	}
	printf("Count is:%d",count);
}
