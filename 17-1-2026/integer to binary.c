#include<stdio.h>
int main(){
	int a=20,bin[100],i=0,j;

	while(a>0){
		bin[i]=a%2;
		a/=2;
		i++;
	}
	printf("Binary: ");
	for(j=(i-1);j>=0;j--){
		printf("%d\t",bin[j]);
	}
}
