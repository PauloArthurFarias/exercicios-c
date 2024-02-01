#include <stdio.h>

int main(){
	int i, resultado=1, numero;
	printf("digite um numero para operar o seu fatorial:");
	scanf("%d", &numero);
	for(i=0; i<numero; i++){
		resultado=resultado*(i+1);
	}
	printf("resultado:%d", resultado);
}
