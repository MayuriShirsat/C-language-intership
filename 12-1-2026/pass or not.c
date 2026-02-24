#include<stdio.h>
int main(){
	int m1=35;
	int m2=35;
	int m3=35;
	int totle=m1+m2+m3;
	printf("%d",(m1>=35 && m2>=35 && m3>=35)||(totle>=120 && ((m1<35)+(m2<35)+(m3<35))==1);
}

