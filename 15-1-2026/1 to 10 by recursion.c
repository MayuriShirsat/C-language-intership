#include<stdio.h>
int num(int n){
	if(n>10){
		return 1;
	}
	printf("%d\n",n);
	num(n+1);
}
int main(){
	num(1);
}
