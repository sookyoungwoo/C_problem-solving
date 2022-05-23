#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int i, j, k, n, num = 1, arr[10][10] = { 0 };
	scanf("%d", &n);
	num = n;
	for (k = 2; k <= n + n; k++) {
		for (j = 1; j <= n; j++) {
			for (i = 1; i <= n; i++) {
				if (i + j == k) {
					arr[i][j] = num;
					//printf("(%d,%d)=%d\n",i,j,arr[i][j]);
					num++;
				}
			}
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}