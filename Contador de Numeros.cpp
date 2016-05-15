#include <stdio.h>

int main() {
	int n, i, j, vet[n];
	int pares, impares, primos, soma;
	int c = 2;
	i = 0;
	n = 0;
	impares = 0;
	pares = 0;
	primos = 0;
	soma =0;
//Quantidade de numeros a serem inseridos
	printf("Insira a quantidade de nuemros (maximo=20) a serem inseridos:\n");
	scanf("%d", &n);
	if ((n < 1) || (n > 20)) {
		printf("Quantidade de numeros invalida!");
		return 0;
	}
//Insercao dos numeros desejados
	printf("Digitar os numeros (digete-o e pressione enter):");
	for(i=0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
//Analise dos nuemros inseridos
	j = 0;
	for(i=0; i < n; i++) {
//Contagem de quantos sao Pares e/ou Impares
		if((vet[j] % 2) == 0)
			pares++;
		else
			impares++;
//Identificacao de quantos sao primos	
		for ( c = 2; c <= (vet[j]-1); c++) {
			if(vet[i] % c == 0) {
				break;
			}
		}
		if (c == vet[j])
			primos++;
//Soma total dos numeros
		soma = soma + vet[j];
		j++;
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
