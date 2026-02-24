# include<stdio.h>
void inner(){
	printf("Inner\n");
}
void outer(){
	printf("Outer\n");
	inner();
}
int main(){
	printf("Main");
	outer();
}
