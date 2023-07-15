#include <bits/stdc++.h>

using namespace std;
long long so_impar(long long valor) {
	if(valor %2 == 1)
		return valor;
	valor /=2;
	return so_impar(valor);
	

}

int main (int argc, char *argv[])
{
	int q;
	cin >> q;
	vector<long long> valores;
	for (size_t i = 0; i < q; i++) {
		long long recebe;
		cin >> recebe;
		valores.push_back(recebe);
	}
	for(int i = 0; i < valores.size(); i++){
		if(valores[i] % 2 == 1 && valores[i] > 2){
			cout << "YES" << endl;
		}
		if(valores[i] % 2 == 0) {
			long long val = so_impar(valores[i]);
			if(val > 1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		}

	}
	
	return 0;
}
