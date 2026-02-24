# include<stdio.h>
int main(){
	int i;
	int a[]={1,2,3,5};
	a[0]=12;
	for(i=0;i<=3;i++){
		printf("%d\t",a[i]);
	}
}
