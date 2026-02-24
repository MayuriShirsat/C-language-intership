#include<stdio.h>
 int multi(int a, int b)
 {
 	return a*b;
 }
  int sum(int a, int b)
 {
 	return a+b;
 }
 int main()
 {
 	int result1=multi(23,3);
 	int result2=sum(23,3);
 	
 	printf("multiplication is: %d\n",result1);
 	printf("Sumation is: %d",result2);
 }
