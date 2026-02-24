#include <stdio.h>
int main(){
	int a=12;
	int b=12;
	printf("Addition:%d\n",a+b);
	printf("Substraction:%d\n", a-b);
	printf("Multiplication:%d\n", a*b);
	printf("Division:%d\n", a/b);
	printf("Reminder:%d\n", a%b);
	//printf("Post-Increment:%d\n", a++);//first used then increment
	//printf("post-Decrement:%d\n", a--);//first used then increment
	printf("Pre-Increment:%d\n", ++a);//first decrement then used
	//printf("pre-Decrement:%d\n", --a);//first decrement then used
}
