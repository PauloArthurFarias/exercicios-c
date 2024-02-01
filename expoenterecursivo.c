#include <stdio.h>

int expoente(int x, int n){
	if(n==0){
		return 1;
	}
	else{
		return x*expoente(x, n-1);
	}
}

int main(){
	int x, n;
	printf("digite a base e o expoente respectivamente: ");
	scanf("%d %d", &x, &n);
	printf("%d", expoente(x, n));
}
