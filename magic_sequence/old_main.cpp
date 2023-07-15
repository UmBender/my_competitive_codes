#include <bits/stdc++.h>

#include <vector>


using namespace std;

long long retorna(int inicio, int final){
	long long retorno = 0;
	int passos = final - inicio / 2;
	for(int i = 1;i+inicio <= final; i+=2){

		/*for(int j = 0;j < listinha.size(); j++){
			cout << listinha.at(j) << " ";
		}
		cout << endl;
		*/

		retorno += retorna(inicio+i, final);
	}
	return retorno+1;
}

int main (int argc, char *argv[])
{
	int valor;
	cin >> valor;
	
	pair<int,int> lista[valor];
	long long total_de_casos = 0;
	int inicio = 0;
	int final = valor;
	
	total_de_casos = retorna(inicio, final);

	//cout << retorna(3,7,1) << endl;
	cout << total_de_casos-1 << endl;
	
	return 0;
}
