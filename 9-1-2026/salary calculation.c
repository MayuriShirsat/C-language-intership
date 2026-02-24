#include<stdio.h>
int main(){
	float sal,total;
	printf("Enter Salary:");
	scanf("%f",&sal);
	float DA= sal*0.4;//40
	float HRA= sal*0.25;//25
	float TF= sal*0.12;//12
	total=sal+DA+HRA+TF;//177
	printf("Total Net salary is:%f",total);
} 
