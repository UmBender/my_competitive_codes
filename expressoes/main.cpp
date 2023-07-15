#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


bool teste(char carac)
{
	return carac == '{' ||
			carac == '[' ||
			carac == '(' ||
			carac == '}' ||
			carac == ']' ||
			carac == ')';
}

bool isOpening(char carac)
{
	return carac == '{' ||
			carac == '[' ||
			carac == '(';

}
bool isClosing(char carac)
{
			return  carac == '}' ||
					carac == ']' ||
					carac == ')' ;
}
char equiv( char carac)
{
	if(carac == '{')
		return '}';
	if(carac == '[')
		return ']';

	return ')';

}

void teste_express(string express)
{
	stack<char> minhaPilha;
	bool status  = true;
	for(char var : express)
	{
		if(teste(var)){
			if(isOpening(var)){
				minhaPilha.push(var);
			}

			if(isClosing(var)){
				if(minhaPilha.empty())
				{
					status = false;
					break;
				}
				if(equiv(minhaPilha.top()) == var){
					minhaPilha.pop();
				}else{
					status = false;
					break;

				}

			}


		}
		
		
	}
	if(!minhaPilha.empty()){
		status = false;
	}
	if(status){
		cout << 'S' << endl;
	}else{
		cout << 'N' << endl;
	}

}


int main (int argc, char *argv[])
{
	
	int tamanho = 0;
	char teste[100];
	cin >> tamanho;
	vector<string> expressoes;
	for (int i = 0; i < tamanho; i++) {
		string express;
		cin >> express;
		expressoes.push_back(express);
	}
	for (int i = 0; i < tamanho; i++) {
		teste_express(teste);
	}
	return 0;
}
