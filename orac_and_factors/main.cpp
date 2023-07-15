#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char *argv[])
{
	int vezes;
	
	cin >> vezes;

	long long numeros[vezes], repete[vezes];

	for (size_t i = 0; i < vezes; i++) {
		cin >> numeros[i] >> repete[i];
	}

	for (size_t i = 0; i < vezes; i++) {
		if(numeros[i] % 2 == 1){
			repete[i] --;
			int restinho =0;
			for(int j = 2; j * j < numeros[i] + 2; j++){
				if(numeros[i]%j ==0){
					restinho = j;
					break;
				}

			}
			if(restinho == 0){
				restinho = numeros[i];
			}
			numeros[i] += restinho;

		}
		numeros[i]  += repete[i] * 2;



		
		cout << numeros[i] << endl; 


		
	}

	return 0;
}
