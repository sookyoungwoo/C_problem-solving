#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char a[100];
    int i, j, k;
    scanf("%s", a);
    k = strlen(a);
    for (i = k - 1; i >= 0; i--) {
        for (j = i; j < k; j++) {
            printf("%c", a[j]);
        }
        printf("   ");
    }
    return 0;
}