#include <stdio.h>
#include <strings.h>

int main(){
	int i, n=2;
	struct conta{
		int numdoc;
		int codigo;
		int datavencimento[3];
		int datapagamento[3];
		float valorconta;
	};
	
	struct conta receber[n];
	for(i=0; i<n; i++){
		printf("\ninsira o numero do doc: ");
		scanf("%d", &receber[i].numdoc);
		printf("\ninsira o codigo do cliente: ");
		scanf("%d", &receber[i].codigo);
		printf("\ninsira o dia mes ano de vencimento: ");
		scanf("%d %d %d", &receber[i].datavencimento[0], &receber[i].datavencimento[1], &receber[i].datavencimento[2]);
		printf("\ninsira o dia mes ano de pagamento: ");
		scanf("%d %d %d", &receber[i].datapagamento[0], &receber[i].datapagamento[1], &receber[i].datapagamento[2]);
		printf("\ninsira o valor da conta: ");
		scanf("%f", &receber[i].valorconta);
	}
	float dias[n], meses[n], anos[n];
	float jurosdia[n], jurosmes[n], jurosano[n], totaljuros[n];
	for(i=0; i<n; i++){
		dias[i] = receber[i].datavencimento[0] - receber[i].datapagamento[0];
		meses[i] = receber[i].datavencimento[1] - receber[i].datapagamento[1];
		anos[i] = receber[i].datavencimento[2] - receber[i].datapagamento[2];
		jurosdia[i] = (dias[i]*0.02)*receber[i].valorconta;
		jurosmes[i] = (meses[i]*0.6)*receber[i].valorconta;
		jurosano[i] = (anos[i]*7,3)*receber[i].valorconta;
		totaljuros[i] = jurosdia[i] + jurosmes[i] + jurosano[i];
	}
	
	float jurosarrecadado = 0;
	for(i=0; i<n; i++){
		jurosarrecadado += totaljuros[i];
	}
	printf("\ntotal de juros arrecadado : %.2f", jurosarrecadado);
}

