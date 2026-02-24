# include<stdio.h>
int main(){
	int choise;
	printf("Enter Your Drink :1 for tea 2 for coffee 3 for water:");
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:
			printf("You choose Tea");
			break;
		case 2:
			printf("You chooes Coffee");
			break;
		case 3:
			printf("You chooes Water");
			break;
		default:
			printf("Please enter a valid choice");
	}
}
