#include <iostream>
#include <map>
#include <string>
#include <vector>


using namespace std;

int main (int argc, char *argv[])
{
	int valor;
	
	cin >> valor;
	map<char, bool> vogais;
	vogais.insert(pair<char, bool>('a',true));
	vogais.insert(pair<char, bool>('e',true));
	vogais.insert(pair<char, bool>('i',true));
	vogais.insert(pair<char, bool>('o',true));
	vogais.insert(pair<char, bool>('u',true));
	vogais.insert(pair<char, bool>('y',true));


	string palavra;	
	cin >> palavra;
	int teste =0;
	while (teste < valor)
	{
		if(vogais[palavra[teste]]){
			if(vogais[palavra[teste+1]]){
				palavra.erase(palavra.begin()+teste+1);
				continue;

			}

		}
		teste++;

	}
	cout << palavra << endl;
	
	return 0;
}
