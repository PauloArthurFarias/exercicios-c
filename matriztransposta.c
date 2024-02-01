#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, m, n;
	printf("informe o numero de linhas da matriz: ");
	scanf("%d", &m);
	printf("informe o numero de colunas da matriz: ");
	scanf("%d", &n);
	int a[m][n], at[n][m];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("insira o elemento de linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			at[i][j]=0;
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			at[j][i]=a[i][j];
		}
	}
	printf("matriz original:");
	for(i=0; i<m; i++){
		printf("\n");
		for(j=0; j<n; j++){
			printf(" %d ", a[i][j]);
		}
	}
	printf("\nmatriz transposta:");
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<m; j++){
			printf(" %d ", at[i][j]);
		}
	}
}
