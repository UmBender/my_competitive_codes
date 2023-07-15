#include <iostream>

using namespace std;
int main (int argc, char *argv[])
{
	
	int n, m;
	cin >> n >> m;

	for (int  i = 0; i < n; i++) {
		if(i%2 == 0){
			for (int j = 0; j < m; j++) {
				cout << '#';
			}
		}
		if(i%2 ==1){
			if(i%4 == 3) cout << '#';
			for (int j = 0; j < m-1; j++) {
				cout << '.';
			}
			if(i%4 == 1) cout << '#';

		}
		cout << endl;

		
	}

	return 0;
}
