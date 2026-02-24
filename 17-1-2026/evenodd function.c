#include<stdio.h>
char evodd(int a){
	if(a%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
int main(){
	printf("The number is:");
	evodd(12);
}
