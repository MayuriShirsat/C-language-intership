#include<stdio.h>
#include<string.h>
int main(){
	int a=1234;
	int reva[100],i=0,j;
	while(a>0){
		reva[i]=a%10;
		a/=10;
		i++;
	}
    printf("Reverse is: ");
    for(j=0;j<i;j++) {
        printf("%d",reva[j]);
		}
}
