# include<stdio.h>
int main(){
	int age;
	printf("Enter your Age:");
	scanf("%d",&age);
	if(age>13){
		if(age>=19){
			if(age<=59){
				printf("Adult");
			}
			else{
				printf("Senior Citizen");
			}
		}
		else{
			printf("teenager");
		}
	}
	else{
		printf("Child");
	}
}
