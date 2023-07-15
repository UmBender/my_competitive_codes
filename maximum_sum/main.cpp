#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct Test {
	Test(long long num_elements,long long operations);
	long long nelements;
	long long operation;
	vector<long long> elements;
	long long max();
};

Test::Test(long long num_elements, long long operations):
	nelements(num_elements), operation(operations)
{
	for ( long i = 0; i < nelements; i++) {
		long long new_value;
		cin >> new_value;
		elements.push_back(new_value);
	}
	sort(elements.begin(), elements.end());
}

long long Test::max()
{
	long long biggersum;
	long long sum = 0;
	for ( long long i = 0; i < nelements - operation; i++) {
		sum += elements[i];
	}
	biggersum =sum;
	long long pos1 = 0;
	long long pos2 = nelements - operation;
	while(pos2 < nelements && pos1 < pos2) {
		sum -= elements[pos1] + elements[pos1+1];
		sum += elements[pos2];
		if(sum > biggersum) {
			biggersum = sum;
		}
		pos1 +=2;
		pos2 +=1;
	}

	return biggersum;
}

int main(int argc, char** argv)
{
	long long tests;
	cin >> tests;
	vector<Test> lista;

	for ( long i = 0; i < tests; i++) {
		long long elem, op;
		cin >> elem;
		cin >> op;
		lista.push_back(Test(elem, op));
	}
	for ( long i = 0; i < tests; i++) {
		cout << lista[i].max() << endl;
	}


	return 0;
}
