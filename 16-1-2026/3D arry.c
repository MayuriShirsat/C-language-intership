# include<stdio.h>
int main(){
	printf("Enter 3 number:");
	int i,j,k,a[3][3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("a[%d][%d][%d]:",i,j,k);
				scanf("%d",&a[i][j][k]);		
			}		
		}
	}
	printf("You Entered Matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("%d\t",a[i][j][k]); 
			}
			printf("\n");
		}
		printf("\n");
	}
}
