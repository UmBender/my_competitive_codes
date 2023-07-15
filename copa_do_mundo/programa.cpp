#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
	vector<int> valores;
	for (int i = 0; i < 0b1111; i++) {
		valores.push_back(1);
	}
	for(int i = 0; i < 15; i++){
		int m, n;
		cin >> m >> n;
		if(m > n){
			valores[14 - i] = 1;
		}else{
			valores[14 - i] = 0;
		}
	}

	
	int next = valores[0] + 1;
	for(int i = 0; i < 3; i++){
		next = next * 2 + 1 + valores[next];
	}
	int saida =abs(next -30);
	cout << (char)((int)'A' + saida) << endl;



}
