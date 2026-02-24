# include<stdio.h>
# include<string.h>
int main(){
	int a,b,operation;

	printf("Enter two Numbers and operation:(1:addition,2:sub,3:mult,4:div)");
	scanf("%d %d %d",&a,&b,&operation);
	switch(operation)
	{
		case 1:
			printf("Addition is:%d",a+b);
			break;
		case 2:
			printf("Substraction is:%d",a-b);
			break;
		case 3:
			printf("multiplication is:%d",a*b);
			break;
		case 4:
			if(b!=0){
				printf("Division is:%f",(float)a/b);
			}
			else{
				printf("Cant divide by zero\n");
			}
			break;
		default:
			printf("Error:Please enter a valid choice");
	}
}
