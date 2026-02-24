#include<stdio.h>
int sum(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}
int main(){
	int a,b,c;
	printf("Enter two num and operation\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
	scanf("%d%d%d",&a,&b,&c);
	switch(c){
		case 1:
			printf("Addition is:%d\n",sum(a,b));
			break;
		case 2:
			printf("Subtraction is:%d\n",sub(a,b));
			break;
		case 3:
			printf("Multiplication is:%d\n",mul(a,b));
			break;
		case 4:
			printf("Division is:%d\n",div(a,b));
			break;
		default:
			{
				printf("Please enter valid numbers");
			}
	}
}
