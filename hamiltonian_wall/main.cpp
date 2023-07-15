#include <iostream>

using namespace std;


void program(void)
{
	int n;
	cin >> n;

	int wall[2 * n];
	char entrada;
	for(int i = 0; i < 2*n; i++){
		cin >> entrada;
		if(entrada== 'B')
			wall[i] = 1;
		else
			wall[i] = 0;
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << wall[i] << endl;
	}
	int status = 1;
	for(int i = 0; i < 2; i++){
		for(int j = 1; j < n-1; j++){
			if(wall[j + n * i] == 1){
				int valor =0;
				valor += wall[((1 + j) % n) + n*i];
				valor += wall[((-1 + j + n) %n) + n*i];
				valor += wall[(j + i*n + n)%(2*n)];
				cout << "Para o elemento :" << i*n + j << endl;
				cout << "Primeira: "<< ((1 + j) % n) + n*i  << endl;
				cout << "Segunda: " << ((-1 + j + n) %n) + n*i << endl;
				cout << "Terceira: " << (j + i*n + n)%(2*n) << endl;
				if(valor %2 == 1){
					cout << "NO"<<endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
	return;




	

}

int main(void)
{
	int test_cases;
	cin >> test_cases;


	for(int i = 0; i < test_cases; i++){
		program();
	}

	return 0;
}
