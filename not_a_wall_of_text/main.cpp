#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[])
{
	int valor = 1;
	char palavra[100] = {0};
	cin.getline(palavra,100);
	for(int i = 0; palavra[i]; i++){
		if(palavra[i] == ' ') valor++;
	}
	cout << valor << endl;
	
	return 0;
}
