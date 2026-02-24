#include<stdio.h>
int main(){
	int a=124;
	int i=1,sum=0;
	while(a){
		sum=sum +(a/100);
		a=(a%100)*10;
	}
	printf("Sum is:%d",sum);
}
