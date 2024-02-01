#include <stdio.h>

int somatorio(int n){
	int resultado;
	if(n==0){
		return 0;
	}else{
		resultado = n + somatorio(n-1);
		return resultado;
	}
}

int main(){
	int n;
	printf("digite um tamanho de sequencia N: ");
	scanf("%d", &n);
	printf("\n%d", somatorio(n));
}
