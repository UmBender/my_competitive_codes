#include <bits/stdc++.h>

using namespace std;


long long fibo(int valor, vector<long long>& faltan)
{
	if(faltan[valor] == -1){
		long long valor_devolve;
		valor_devolve = fibo(valor-1, faltan) + fibo(valor-2, faltan);
		faltan[valor] = valor_devolve;
	}
	return faltan[valor];
}

long long soma(vector<long long> & faltan){
	long long soma;
	for (int i = 0; i < faltan.size(); i++) {
		soma += faltan[i];
	}
	return soma;
}

int main (int argc, char *argv[])
{
	int tamanho;
	cin >> tamanho;
	vector<long long> faltan;
	faltan.push_back(0);
	faltan.push_back(1);
	for(int i = 2; i < tamanho+1; i++){
		faltan.push_back(-1);
	}
	long long final = fibo(tamanho, faltan); 

	long long result = soma(faltan);

	
	cout << result << endl;

	
	return 0;
}
