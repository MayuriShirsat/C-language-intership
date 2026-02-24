# include<stdio.h>
int main(){
	printf("Enter 3 number:");
	int i,j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);			
		}
	}
	printf("You Entered Matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]); 
		}
		printf("\n");
	}
}
