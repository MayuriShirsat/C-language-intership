# include<stdio.h>
int main(){
	int i=0;
	while(i<=10){
		i++; // inctrement or decrement should be before anything in while loop
		if(i==4){
			continue;
		}
		printf("%d\n",i);
	}
}
