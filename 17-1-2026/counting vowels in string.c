#include<stdio.h>
#include<string.h>
int main(){
	char name[100]="mayuri santosh";
	int i,count=0;
	for(i=0;i<strlen(name);i++){
		if(name[i]=='a' || name[i]=='e' || name[i]=='i'|| name[i]=='o' ||name[i]=='u'){
			count++;
		}
	}
	printf("Count is:%d",count);
}
