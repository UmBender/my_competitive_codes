#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int pos1[3];
	int pos2[3];
	cin >> pos1[0] >> pos1[1] >> pos1[2];
	cin >> pos2[0] >> pos2[1] >> pos2[2];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		if(pos1[i] == pos2[i]){
			sum++;
		}
	}
	if(sum > 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

    return 0;
}
