#include <bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;

struct Case {
	Case(int num);
	int numCase();
	int numInterv;
	vector<int> valores;
};

Case::Case(int num):
	numInterv(num) 
{
	for (size_t i = 0; i < num; i++) {
		int novo_valor1, novo_valor2;
		cin >> novo_valor1 >> novo_valor2;
		valores.push_back(novo_valor1);
		valores.push_back(novo_valor2);

	}
}

int Case::numCase() {
	int maxL = 0;
	int minR = INT_MAX;
	for (int i = 0; i < numInterv; i++) {
		maxL = maxL < valores[i*2] ? valores[i*2] : maxL;
		minR = minR > valores[i*2 + 1] ? valores[i*2 + 1] : minR;
	}
	return maxL > minR ? maxL-minR : 0;

}

int main(int argc, char** argv)
{
	int casos;
	cin >> casos;

	vector<Case> todos_casos;

	for (size_t i = 0; i < casos; i++) {
		int tamanho;
		cin >> tamanho;
		Case novoCaso = Case(tamanho);
		todos_casos.push_back(novoCaso);
	}
	for (size_t i = 0; i < casos; i++) {
		cout << todos_casos[i].numCase() << endl;
		
	}

    return 0;
}
