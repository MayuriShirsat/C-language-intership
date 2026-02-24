#include<stdio.h>
void pali( int a){
	int temp=a;
	int reva = 0;

	while (a) {
	  reva = reva * 10 + a % 10;
	  a /= 10;
	}
	if(reva==temp){
		printf("Num is Palindrom");
	}
	else{
		printf("Num is not palindrom");
	}
}
int main(){
	pali(212);
}
