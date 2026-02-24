#include<stdio.h>
void great(int a, int b, int c){
	if(a>b && a>c){
		printf("A is greater");
	}	
	else if(b>a && b>c){
		printf("B is greater");
	}
	else if(c>a &&  c>b){
		printf("C is greater");
	}
	else{
		printf("All 3 are equal");
	}
}
int main(){
	great(21,2,1);
}
