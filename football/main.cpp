#include <iostream>
#include <string>


using namespace std;


int main (int argc, char *argv[])
{
	string numeros;

	cin >> numeros;
	bool stats = false;
	for (int i = 0; i < numeros.size(); i++) {
		int counter = 1;
		int pos = i+1;

		while (numeros[i] == numeros[pos] && pos < numeros.size())
		{
			counter++;
			pos++;
			if(counter == 7){
				stats = true;
				break;
			}
			
		}
		if(counter >=7){
			stats = true;
			
			break;
		}
	}
	if(stats){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	
	return 0;
}
