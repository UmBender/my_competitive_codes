#include <bits/stdc++.h>


using namespace std;


struct smallMatrix
{
	int x1, x2, y1, y2;
	bool is_simetric;
	
	smallMatrix(int x1, int x2, int y1, int y2);
};
smallMatrix::smallMatrix(int xi1, int xi2, int yi1, int yi2):
	x1(xi1), x2(xi2), y1(yi1),y2(yi2)
	{
		if(xi2 == yi1)
			is_simetric = true;
		else
			is_simetric = false;
	}



struct Matrixes
{
	int tiles;
	int dimension;
	vector<smallMatrix> matrizes;
	
	Matrixes(int tilesN, int dimensionN);

	bool find_Transversal();
	bool find_Simetric();
	bool is_Possible();
	bool is_Transversal(size_t pos1, size_t pos2);

	
};

Matrixes::Matrixes(int tilesN, int dimensionN):
	tiles(tilesN), dimension(dimensionN)

	{
		for (int  i = 0; i < tiles; i++) {
			int x1, x2;
			int y1, y2;
			cin >> x1 >> x2;
			cin >> y1 >> y2;
			matrizes.push_back(smallMatrix(x1,x2,y1,y2));
		}


	}

bool Matrixes::is_Possible()
{
	if(dimension %2 == 0){
		return true;
	}

	return false;
}
bool Matrixes::is_Transversal(size_t pos1, size_t pos2)
{
	smallMatrix primeira = this->matrizes[pos1];
	smallMatrix segunda = this->matrizes[pos2];

	bool status = primeira.x1 == segunda.x1;
	status &= primeira.y2 == segunda.y2;
	status &= primeira.x2 == segunda.y1;
	status &= primeira.y1 == segunda.x2;

	return status;
}
bool Matrixes::find_Simetric()
{
	for (size_t i = 0; i < this->tiles; i++) {
		if(this->matrizes[i].is_simetric){
			return true;
		}
	}
	return false;
}

bool Matrixes::find_Transversal()
{
	for(size_t i = 0; i < this->tiles; i++){
		for(size_t j = 0;  j < this->tiles; j++){
			if(is_Transversal(i,j))
				return true;

		}
	}
	return false;
}

int main (int argc, char *argv[])
{
	int numero_testes;
	cin >> numero_testes;

	vector<Matrixes> todos_os_casos;
	for(int i = 0; i < numero_testes; i++){
		int tiles;
		int dimension;
		cin >> tiles >> dimension;
		vector<smallMatrix> pequenasMatrizes;
		
		todos_os_casos.push_back(Matrixes(tiles,dimension));
	}
	for (int i = 0; i < numero_testes; i++) {
		bool status = false;
		if(todos_os_casos[i].is_Possible()){
			if(todos_os_casos[i].dimension != 2){
				status = todos_os_casos[i].find_Simetric() & todos_os_casos[i].find_Transversal();


			}else{
				status = todos_os_casos[i].find_Simetric();
			}
		}

		if(status){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;

		}

	}


	
	return 0;
}
