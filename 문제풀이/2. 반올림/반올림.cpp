#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a[10000000],n, i, j, k;
	scanf("%d", j);
	for (i = 0; ; i++) {
		j = a[i];
	}
	for (i; i <= 0; i--) {
		if (a[i] < 5) {
			a[i] = 0;
		}
		else {
			a[i] = 0;
			a[i - 1] += 1;
		}
		printf("%d\n", a);
	}
	return 0;
}