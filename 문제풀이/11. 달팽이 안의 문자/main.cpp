#include <stdio.h>
int main() {
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int a[15][15] = { 0, };
	int num, x = 0, y = 0,e,f;
	int i, k, j;
	int size, sign = 1;
	scanf("%d %d %d %d", &num,&size,&e,&f);
	for (k = 0; k < size; ++k) {
		a[y][x] = num++;
		x += sign;
	}
	x -= 1;
	for (i = size - 1;i > 0; --i) {
		for (j = 0; j < i; ++j) {
			y += sign;
			a[y][x] = num++;
		}
		sign *= -1;
		for (k = 0; k < i; ++k) {
			x += sign;
			a[y][x] = num++;
		}
	}
	for(int m=0;m<size;m++){
		for(int n=0;n<size;n++){
			//printf("%2d ",a[m][n]);
		}
		//printf("\n");
	}
	printf("%d",a[e-1][f-1]);
	return 0;
}    
