#include <bits/stdc++.h>

using namespace std;
struct Matriz 
{
	vector<vector<int>>elementos; 
	int linhas;
	vector <int> numeros;
	map <int, int> posicao_numeros;


	Matriz(int dimensao);


};

Matriz:: Matriz(int dimensao):
	linhas(dimensao)
	{
		for(size_t i = 0; i < dimensao; i++){
			vector<int> linha;
			for(size_t j = 0; j < dimensao -1; j++){
				int valor;
				cin >> valor;
				linha.push_back(valor);
			}
			elementos.push_back(linha);
		}

	}
#if INIT_MAIN

int main (int argc, char *argv[])
{
	int casos;
	cin >> casos;
	vector<Matriz> minhas_matrizes;
	
	for (size_t i = 0; i < casos; i++) {
		int dimensao;
		cin >> dimensao;
		minhas_matrizes.push_back(Matriz(dimensao));
		
		
	}
	
	return 0;
}
#endif
