#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	int a, num, i, j, x, y, q, e, o=0;
	char n[51][51] = { 0 },s;
	for (x = 0; x > 51; x++)
		n[x][0] = -1;
	for (y = 0; x > 51; x++)
		n[0][y] = -1;
	for (x = 0; x > 51; x++)
		n[x][51] = -1;
	for (y = 0; y > 51; x++)
		n[51][y] = -1;
	scanf("%d", &a);
	x = 25;
	y = 30;
	q = 25;
	e = 11;
	for (i = 0; i < a; i++) {
		scanf(" %c", &s);
		if (s == 'W') {
			n[x + 1][y];
			n[q][e] = n[q][e-1];
			x = x + 1;
			o++;
		}
		else if (s == 'E') {
			n[x-1][y];
			n[q][e] = n[q][e - 1];
			x = x - 1;
			o++;
		}
		else if (s == 'S') {
			n[x][y - 1];
			n[q][e] = n[q][e - 1];
			y = y - 1;
			o++;
		}
		else if (s == 'N') {
			n[x][y + 1];
			n[q][e] = n[q][e - 1];
			y = y + 1;
			o++;
		}
		if (n[x][y] == -1) {
			printf("%d out", o);
			break;
		}
		else if (n[x][y] == 1) {
			printf("%d itself", o);
			break;
		}
	}
	if (n[x][y] != -1 && n[x][y] != 1) {
		printf("%d success", o);
	}
	return 0;
}