#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	char necklace[101] = "";
	cin >> necklace;

	int links =0;
	int pearls = 0;

	for (size_t i = 0; necklace[i]; i++) {
		if(necklace[i] == 'o')
			pearls++;
		else
			links++;
	}

	if(links == 0 || pearls == 0){
		cout << "YES" << endl;
		return 0;
	}
	if(links % pearls == 0) {
		cout << "YES" << endl;
		return 0;
	}else{
		cout << "NO" << endl;
		return 0;
	}

	return 0;
}
