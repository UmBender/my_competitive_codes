#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main (int argc, char *argv[])
{
	int Tamanho, Quantidade;

	cin >> Tamanho >> Quantidade;

	int *lista = new int[Tamanho];

	stack<int> pilha;

	for (size_t i = 0; i < Tamanho; i++) {
		cin >> lista[i];
	}
	
	int i = 0;
	while((i < Tamanho) ){
		
		while((!pilha.empty()) && pilha.top() < lista[i] && ((Tamanho - i) > Quantidade - pilha.size())){
			pilha.pop();

		}
		
		if(pilha.size() < Quantidade){
			pilha.push(lista[i]);
		}
		i++;
	}

	stack<int> reverse ;	
	for (int i = 0;!pilha.empty(); i++) {
		reverse.push(pilha.top());
		pilha.pop();
	}
	for (int i = 0; !reverse.empty(); i++) {
		cout << reverse.top() << " ";
		reverse.pop();
	}
	cout << endl;

	
	return 0;
}
