#include <iostream>
#include <string>
#include <vector>

using namespace std;

void teste(string mapa, int n, int m) {
	string saida;
	vector<int> lista;
	for(int i = 0 ; i < mapa.size(); i++) {
		if(mapa[i] == '1'){
			lista.push_back(i);
		}
	}
	saida = mapa;
	for (int i = 0; i < n; i++) {
		bool status = false;
		for(int j = 0; j < lista.size(); j++){
			if((i > (lista[j] - m -1)) && (i < lista[j] + m + 1)) {
				status = true;
			}
		}
		if (status == true) {
			saida[i] = '1';
		}
	}
	cout << saida << endl;
	

}

int main (int argc, char *argv[]) {
	int t;
	cin >> t;
	int m[t];
	int n[t];

	string palavras[t];
	

	for (int i = 0; i < t; i++) {
		cin >> n[i] >> m[i];
		cin >> palavras[i];
	}

	for (int i = 0; i < t; i++) {
		teste(palavras[i], n[i], m[i]);
	}


	
	return 0;
}
