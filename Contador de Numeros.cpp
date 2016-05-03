#include <stdio.h>

int main() {
	int n, i, j, k, vet[n], teste;
	int pares, impares, primos, soma;
//Quantidade de numeros a serem inseridos
	printf("Insira a quantidade de nuemros (maximo=20) a serem inseridos:\n");
	scanf("%d", &n);
	if ((n < 1) || (n > 20)) {
		printf("Quantidade de numeros invalida!");
	}
//Insercao dos numeros desejados
	printf("Digitar os numeros (digete-o e pressione enter):");
	j = 0;
	for(i=0; i < n; i++) {
		scanf("%d", &vet[j]);
		j++;
	}
//Analise dos nuemros inseridos
	j = 0;
	soma = 0;
	for(i=0; i < n; i++) {
//Contagem de quantos sao Pares e/ou Impares
		if((vet[j] % 2) == 0)
			pares++;
		else
			impares++;
//Identificacao de quantos sao primos	
		for (k = 2; k < vet[j]; k++) {// Arrumar esta parte que nao esta funcionando
			if (vet[j] % k == 0) 
				teste = 1;
		}
		if (!teste)
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
