# include<stdio.h>
int main(){
	int marks;
	printf("Enter your Marks:");
	scanf("%d",&marks);
	if(marks>90){
		printf("Execlent");
	}
	else if(marks>=75){
		printf("Distinction");
	}
	else if(marks>=40){
		printf("passed");
	}
	else{
		printf("Fail");
	}
}
