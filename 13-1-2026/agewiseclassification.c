# include<stdio.h>
int main(){
	int age;
	printf("Enter your Marks:");
	scanf("%d",&age);
	if(age<13){
		printf("Child");
	}
	else if(13<=age && age<=19){
		printf("Teenager");
	}
	else if(20<=age && age<=59){
		printf("Adult");
	}
	else if(age>=60){
		printf("Senior Citizen");
	}
	else{
		printf("Plse Enter valid Age");
	}
}
