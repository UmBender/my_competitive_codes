#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	int n , k;
	
	cin >> n >> k;
	int lista[n];
	int quem_passa =0;

	for(int i =0; i < n; i++){
		cin >> lista[i];	
	}
	for(int i= 0; i < k && lista[i] >0; i++){
		quem_passa++;
	}
	while(lista[quem_passa]> 0 && lista[quem_passa-1] == lista[quem_passa] && quem_passa < n){
		quem_passa++;
	}

	cout << quem_passa << endl;
	
	return 0;
}
