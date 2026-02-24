#include<stdio.h>
int main(){
	char choice[100];
	do{
		printf("Enter your choice 1)tea 2)coffee or Enter exit:");
		scanf("%s",choice);
		if(strcmp(choice,"tea")==0){
			printf("your Tea will be there soon\n");
		}
		else if(strcmp(choice,"coffee")==0){
			printf("your Coffee will be there soon\n");
		}
		else{
			printf("Then we will searve Water\n");
		}
	}while(strcmp(choice,"exit")!=0);

}
