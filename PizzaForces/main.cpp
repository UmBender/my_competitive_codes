#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <iostream>

int main(void)
{
	int  numero_de_entradas;
	scanf("%i", &numero_de_entradas);

	long long lista[numero_de_entradas];
	int i = numero_de_entradas;

	while (i--) {
		std::cin >> lista[i];	
		
	}
	i = numero_de_entradas;
	while (i--) {
		long long resultado = 0;
		if(lista[i] % 2 == 1) lista[i]++;
		if(lista[i] <=6) resultado = 6/2 *5;
		else{
			resultado = lista[i] / 2 * 5;
		}
		std::cout << resultado << std::endl;
	}

	

	return 0;
}
