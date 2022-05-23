#pragma warning(disable:4996)
#include<stdio.h>
#define N 23
int G[N][N] = { 0 }, cnt = 0;
void H(int p, int q, int r) {
	G[p][q] = 1;
	cnt++;
	if (p - 1 > 0 && G[p - 1][q] == 0) H(p - 1, q, r);
	if (p + 1 <= r && G[p + 1][q] == 0) H(p + 1, q, r);
	if (q - 1 > 0 && G[p][q - 1] == 0) H(p, q - 1, r);
	if (q + 1 <= r && G[p][q + 1] == 0) H(p, q + 1, r);
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x, y, z, i, j;
	scanf("%d %d %d", &z, &x, &y);
	for (i = 1; i <= z; i++) {
		for (j = 1; j <= z; j++)
			scanf("%d", &G[i][j]);
	}
	H(x, y, z);
	printf("%d", cnt);
	return 0;
}