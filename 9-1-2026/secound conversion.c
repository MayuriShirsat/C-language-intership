#include<stdio.h>
int main(){
	int sec=3666;
	int h=sec/3600;
	int m=(sec%3600)/60;
	int s=(sec%3600)%60;
	printf("Conversion is: hours:%d munits:%d secounds:%d",h,m,s);
}
