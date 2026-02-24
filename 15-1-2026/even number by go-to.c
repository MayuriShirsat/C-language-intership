# include<stdio.h>
int main(){
	int i=0;
	start:
		if(i<=10){
			printf("%d\n",i);
			i+=2;
			goto start;
		}
}
