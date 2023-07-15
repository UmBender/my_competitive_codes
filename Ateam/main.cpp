#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	int entradas;
	int total = 0;

	cin >> entradas;


	for (int i = 0; i < entradas; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		if(x+y+z > 1) total++;
	}

	cout << total << endl;


	
	return 0;
}
