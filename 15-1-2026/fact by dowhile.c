# include<stdio.h>
int main(){
	int fact=1;
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	do{
		fact*=n;
		n--;
	}
	while(n>1);
	printf("Factorial is:%d",fact);
}
