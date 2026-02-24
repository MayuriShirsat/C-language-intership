#include<stdio.h>
int main(){
	int i=0;
	start:
		printf("%d\n",i);
		i++;
		if(i<=3){
			goto start;
		}
}
