#include <bits/stdc++.h>

using namespace std;

class Test {
public:
	int nelements;
	int mult;
	vector<long long> elements;
	int calc();
	Test(int numelements, int multi);

};

Test::Test(int numelements, int multi):
	nelements(numelements), mult(multi)
{
	for (int i = 0; i < nelements; i++) {
		cin >> elements[i];
	}
	sort(elements.begin(), elements.end());
}


int Test::calc() {
	
	int sum = 0;
	int pos = 0;
	int rem = nelements - 1;
	int middle = 0;

	for (int i = 0; elements[i]* 2 <= elements[rem] ; i++) {
		middle++;
	}
	




}



int main(int argc, char** argv)
{
	int number;
	cin >> number;
	vector<Test> casos;
	for (int i = 0; i < number; i++) {
		int nelements, mult;
		cin >> nelements >> mult;
		casos.push_back(Test(nelements,mult));
	}

	for (int i = 0; i < number; i++) {

	}

    return 0;
}
