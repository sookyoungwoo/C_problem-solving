#include <stdio.h>
#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, i, j, num;
	int one = 0, two = 1, res = 0;  
	scanf("%d", &n); //강의 너비
	for (i = 0; i < n; i++) {
		res = one + two; 
		one = two;     
		two = res; 
	}
	printf("%d", res);
	return 0;
}