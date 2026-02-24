#include<stdio.h>
int fibo(int n){
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	return fibo(n-1)+fibo(n-2);
}
int main(){
	int n=6,i;
    printf("Fibonacci series:");
    for(i=0;i<n;i++) {
        printf("%d\t",fibo(i));
    }
}
