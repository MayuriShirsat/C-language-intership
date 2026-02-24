#include<stdio.h>
int main(){
	int a=123;
	int count=0;
	while(a){
		count++;
		a=(a%100)*10;
	}
	printf("count is:%d",count);
}
