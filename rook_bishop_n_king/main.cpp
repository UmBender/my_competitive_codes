#include <bits/stdc++.h>

using namespace std;

int rook(int r1, int c1, int r2, int c2){
	int sum = 0;
	sum += r1 != r2 ? 1: 0;
	sum += c1 != c2 ? 1: 0;
	return sum;
}

int bishop(int r1, int c1, int r2, int c2){
	int sum = 0;
	if((r1 + c1) % 2 != (r2 + c2) % 2) {
		return sum;
	}else{
		int mod1 = r1 > r2 ? r1 -r2: r2-r1;
		int mod2 = c1 > c2 ? c1 -c2: c2-c1;
		if((mod1) == (mod2)) {
			sum = 1;
			return sum;
		}else {
			sum = 2;
			return sum;

		}
	}
}

int king(int r1, int c1, int r2, int c2){
	int var1 = r1 > r2 ? r1-r2 : r2-r1;
	int var2 = c1 > c2 ? c1-c2 : c2-c1;

	return var1 > var2 ? var1 : var2;
}

int main(int argc, char** argv)
{
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	int valrook = rook(r1,c1,r2,c2);
	int valbishop = bishop(r1,c1,r2,c2);
	int valking = king(r1,c1,r2,c2);
    cout << valrook << " " << valbishop << " " << valking << endl;

    return 0;
}
