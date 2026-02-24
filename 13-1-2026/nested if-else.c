#include<stdio.h>
int main(){
	int math,sci;
	printf("Enter the marks of Maths and science:");
	scanf("%d %d",&math,&sci);
	if(math>=40){
		if(sci>=40){
			printf("Passed in Both");
		}
		else{
			printf("Pass in maths but Fail in Science");
		}
	}
	else{
		if(sci>=40){
			printf("Pass in Science but Fail in Maths");
		}
		else{
			printf("Failed in Both");
		}
	}
}
