#include<stdio.h>
int prime(int v){
	int i;
	for(i=2;i<v;i++){
		if(v%i==0){
		printf("Number is not Prime\n");
		break;
		}
		printf("Number is Prime\n");
		break;
	}
}
int main(){
	prime(22);
}
