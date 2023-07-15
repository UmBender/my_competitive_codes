#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Banco{
public:
	vector<int>* fusoes;
	int* posix;
	int pos;
	Banco(int p);
	bool same(Banco &compare);
};

Banco::Banco(int p):pos(p) {
	fusoes = new vector<int>;
	posix = new int;
	fusoes->push_back(p);
}
bool Banco::same(Banco &compare) {
	bool is_same = false;
	if(posix == compare.posix){
		is_same = true;
	}

	return is_same;
}

void fusaob(Banco &a, Banco &b) {
	if(a.posix != b.posix) {
		delete b.posix;
		b.posix = a.posix;
	}
}

bool same(Banco &a, Banco &b) {
	cout << a.posix << " " << b.posix << endl;
	if(a.posix == b.posix) {
		return true;
	}
	return false;
}



int main(int argc, char** argv)
{
	int n, k;
	cin >> n >> k;
	vector<Banco> AllBancs;
	AllBancs.reserve(n);
	vector<string> saidas;
	for (int i = 0; i < n; i++) {
		AllBancs.push_back(Banco(n+1));
	}

	for (int i = 0; i < k; i++) {
		char type;
		int a, b;
		cin >> type >> a >> b;



		switch (type) {
			case 'F':
				fusaob(AllBancs[a-1], AllBancs[b-1]);

				break;

			case 'C':
				if(same(AllBancs[a-1], AllBancs[b-1])) {
					saidas.push_back("S");
				}else{
					saidas.push_back("N");
				}

				break;
		}

		
	}
	for(int i = 0; i < saidas.size(); i++) {

		cout << saidas[i] << endl;

	}

    return 0;
}
