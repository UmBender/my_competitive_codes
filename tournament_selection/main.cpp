#include <bits/stdc++.h>


using namespace std;


int main (int argc, char *argv[])
{
	int valor = 0;
	char letra;
	for(int i =0; i< 6; i++){
		cin >> letra;
		if(letra == 'W') valor ++;
	}
	valor ++;
	valor/=2;
	if(valor > 0){
		cout << 4- valor << endl;
	}else{
		cout << -1 << endl;
	}
	
	
	return 0;
}
