#include <stdlib.h>
#include <stdio.h>

#define abs(valor) valor > 0? valor:-valor

int main(void)
{
	int mat[5][5];
	for (size_t i = 0; i < 5; i++) {
		scanf("%i %i %i %i %i",
				&mat[i][0],
				&mat[i][1],
				&mat[i][2],
				&mat[i][3],
				&mat[i][4]);
	}
	int ix, jx;
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			if(mat[i][j] == 1){
				ix = i;
				jx = j;
				break;
				break;
			}
		}
	}
	int di = 2 - ix;
	int dj = 2 - jx;

	di = abs(di);
	dj = abs(dj);

	printf("%d\n", dj+di);



	return 0;
}
