#include<stdio.h>
#include<string.h>
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char A[3333];
	int i, j, k, x;
	scanf("%s", A);
	k = strlen(A);
	for (i = 0; i < k;) {
		if (A[i] == '(' && '1' <= A[i + 1] && A[i + 1] <= '9' && A[i + 2] == ')') {
			j = A[i + 1] - '0';
			for (x = 0; x < j; x++) printf("%c", A[i + 3]);
			i += 4;
		}
		else
			printf("%c", A[i++]);
	}
	return 0;
}
