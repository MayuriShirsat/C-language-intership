# include<stdio.h>
int main(){
	printf("Enter 5 number:");
	int i,a[5];
	for(i=0;i<5;i++){
		printf("element%d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("You Entered\n");
	for(i=0;i<5;i++){
		printf("a[%d] %d \t",i,a[i]); 
	}
}
