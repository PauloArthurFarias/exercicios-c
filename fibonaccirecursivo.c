#include <stdio.h>

int termofibonacci(n){
	if(n==1){
		return 0;
	}	else if(n==2){
		return 1;
	}	else{
		return termofibonacci(n-1)+termofibonacci(n-2);
	}
	
	
}

int main(){
	int a;
	printf("digite o termo da serie de fibonacci: ");
	scanf("%d", &a);
	printf("o termo %d da serie fibonacci eh %d", a, termofibonacci(a));
	
}
