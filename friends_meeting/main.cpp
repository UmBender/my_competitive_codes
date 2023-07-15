#include <iostream>

using namespace std;

void invert_int(int* a, int* b){
	int t = *a;
	*a = *b;
	*b= t;
}

int pa(int a){
	return (1+a)*a/2;
}

int main (int argc, char *argv[])
{
	int valor1;
	int valor2;

	cin >> valor1;
	cin >> valor2;
	
	if(valor1 > valor2) invert_int(&valor1, &valor2);

	int dx = valor2 -valor1;
	int move1;
	int move2;

	if(dx %2 == 0){
		move1 = dx/2;
		move2 = dx/2;
	}else{
		move1 = dx/2;
		move2 = 1+ dx/2;
	}
	int valor_final = pa(move1) + pa(move2);
	cout << valor_final << endl;

	
	return 0;
}

