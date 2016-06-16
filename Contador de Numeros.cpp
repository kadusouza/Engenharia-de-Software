#include <stdio.h>

int main() {
	int n, i, altint, altfloat;
	int pares, impares, primos, soma;
	int c = 2;
	i = 0;
	n = 0;
	impares = 0;
	pares = 0;
	primos = 0;
	soma =0;
	altint = 0;
	altfloat =0;
//Quantidade de numeros a serem inseridos
	printf("Insira a quantidade de nuemros inteiros a serem inseridos (maximo=20):\n");
	scanf("%d", &n);
	if ((n < 1) || (n > 20)) {
		printf("Quantidade de numeros invalida!");
		return 0;
	}
//Declaração do vetor
	int  vet[n];
	float vetalt[n];
//Insercao dos numeros desejados
	printf("Digitar os numeros e pressionar enter :");
	for(i=0; i < n; i++) {
		scanf("%f", &vetalt[i]);
		vet[i] = vetalt[i];
		if ((vetalt[i] < 0 ) || (vet[i] != vetalt[i])) {
			printf("Numero invalido! Somente numeros inteiros naturais");
			return 0;
		}
	}

//Analise dos nuemros inseridos
	for(i=0; i < n; i++) {
//Contagem de quantos sao Pares e/ou Impares
		if((vet[i] % 2) == 0)
			pares++;
		else
			impares++;
//Identificacao de quantos sao primos	
		for ( c = 2; c <= (vet[i]-1); c++) {
			if(vet[i] % c == 0) {
				break;
			}
		}
		if (c == vet[i])
			primos++;
//Soma total dos numeros
		soma = soma + vet[i];
	}
	printf("---------------------------------\n");
	printf("	%d sao pares\n", pares);
	printf("---------------------------------\n");
	printf("	%d sao impares\n", impares);
	printf("---------------------------------\n");
	printf("	%d sao primos\n", primos);
	printf("---------------------------------\n");
	printf("	A soma total sera %d\n", soma);
	printf("---------------------------------\n");
	
	return 0;
}
