# include<stdio.h>
void modify(int x){
	x=x+10;
	printf("Inside:%d\n",x);
}
int main(){
	int a=5;
	modify(a);//call by value
	printf("Outside:%d",a);
}
