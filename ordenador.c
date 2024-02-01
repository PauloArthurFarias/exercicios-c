#include <stdio.h>

int main(){
	int i, j, contador, aux, n;
	printf("insira um valor N menor ou igual a 20 para o vetor: ");
	scanf("%d", &n);
	int v[n];
	for(i=0; i<n; i++){
		printf("insira o elemento %d do vetor: ", i+1);
		scanf("%d", &v[i]);		
	}
	for(contador=1; contador<n; contador++){
		for(i=0; i<n-1; i++){
			if(v[i]>v[i+1]){
			aux=v[i];
			v[i]=v[i+1];
			v[i+1]=aux;
			}
		}
	}
	printf("o vetor em ordem crescente eh: ");
	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}	
}
