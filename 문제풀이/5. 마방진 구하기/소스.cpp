#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int n, i, j, d, a[31][31], k = 0, m = 0;
	scanf("%d", &n);
	if (n % 2 != 0) {
		d = n;
		for (i = n + 1; i < 31; i++) {
			a[i][i] = 0;
		}
		n = n / 2 + 1;
		a[m][n] = k;
		for (;;) {
			k++;
			if (a[m - 1][n + 1] == 0) {
				if (m-1 == -1) {
					m=n-1;
					a[m][n]=k++; 
				}
				if (m-1 == -1 && n+1 == n) {
					m = n - 1;
					n = m + 1;
					a[m][n] = k++;
				}
				if (n+1==n) {
					n = m + 1;
					a[m][n] = k++;
				}
			}
			if (a[m-1][n+1]!=0) {
				m = m + 1;
			}
		}
		for (i = 0; i < d; i++) {
			printf("%d", a[i][i]);
		}
	}
	return 0;
}