# include<stdio.h>
int main(){
	int i=1;
	int count=0;
	while(i<=5){
		count+=i;
		i++;
	}
	printf("Sum is:%d",count);
}
