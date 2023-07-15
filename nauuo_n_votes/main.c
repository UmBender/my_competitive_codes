#include <stdio.h>
#include <stdlib.h>


#define abs(x) x > 0 ? x : -x

int main(void)
{
	int x, y, z;
	char result;
	scanf("%d %d %d", &x, &y, &z);

	int dn = x - y;
	int dt = x - y;

	if( x > y) {
		if(x > y + z) result = '+';
		if(x <= y + z) result = '?';
	}
	if(x < y){
		if(y > x + z) result = '-';
		if(y <= x+z) result = '?';
	}
	if(x == y){
		if( z > 0) result = '?';
		if( z == 0) result = '0';
	}



	printf("%c\n", result);


	return EXIT_SUCCESS;
}
