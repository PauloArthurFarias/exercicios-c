#include <stdio.h>
int main(){
int v[7], i, j, aux;
printf("Digite os 7 numeros de um vetor\n");
for(i=0; i<7; i++){
	printf("digite os elementos do vetor:");
	scanf("%d", &v[i]);
}
printf("vetor:");
for(i=0; i<7; i++){
printf("%d ", v[i]);
if(i==6){
	printf("%d\n", v[i]);
}
}
for(i=0; i<7-1; i++){
	for(j=0; j<7-1; j++){
		if(v[j]>v[j+1]){
			aux=v[j];
			v[j]=v[j+1];
			v[j+1]=aux;
		}
	}
}
printf("vetor ordenado:");
for(i=0; i<7; i++){
	printf("%d ", v[i]);
}
}
