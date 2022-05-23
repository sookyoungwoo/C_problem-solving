#include <stdio.h>
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int i, n, a1 = 0, a2 = 1, num;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        num = a1 + a2;  
        a1 = a2;   
        a2 = num;   
    }
    printf("%d",num);
    return 0;
}
