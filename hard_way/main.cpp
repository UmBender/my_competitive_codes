#include <iostream>
#include <vector>


using namespace std;

struct Ponto 
{
	long long x, y;

	Ponto(long long n, long long t);

};


Ponto::Ponto(long long n, long long t):
		x(n),y(t){


		}

void organizaPontos(vector<Ponto> &triangulo){
	for (int i = 0; i < triangulo.size()-1; i++) {
		for(int j = 1; j<triangulo.size(); j++){
			if(triangulo.at(i).y > triangulo.at(j).y){
				Ponto novoPonto = triangulo.at(i);
				triangulo.at(i) = triangulo.at(j);
				triangulo.at(j)= novoPonto;
			}
		}

	}
}



int main(void){
	int valor;
	cin>> valor;

	vector<vector<Ponto>> meusTriangulos;
	for (int i = 0; i < valor; i++) {
		vector<Ponto>Triangulo;
		for(int j = 0; j< 3;j++){
			long long x;
			long long y;
			cin >> x;
			cin >> y;
			Triangulo.push_back(Ponto(x,y));
		}
		meusTriangulos.push_back(Triangulo);
	}
	for(int i = 0; i < meusTriangulos.size(); i++){
		organizaPontos(meusTriangulos.at(i));
		vector<Ponto> atual = meusTriangulos.at(i);
		if(atual.at(0).y < atual.at(1).y &&atual.at(1). y == atual.at(2).y){
				
			cout << abs(atual.at(2).x -atual.at(1).x)<<endl;
		}else{
			cout << 0 <<endl;

		}



	}


}
