#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int chain(int x) {
    int P[11], Q[11], i, j, k, r;

    for (i = 0; x > 0; i++) {
        P[i] = Q[i] = x % 10;
        x /= 10;
    }

    sort(P, P + i, cmp);//내림차순
    sort(Q, Q + i);//오름차순

    for (r = 0, j = 0, k = 0; r < i; r++) {
        j *= 10;
        j += P[r];
        k *= 10;
        k += Q[r];
    }

    return j - k;
}

int main(void) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b, c, i, j, arr[100000];
    scanf("%d", &a);

    arr[0] = a;

    for (i = 1,c=1;c==1 ; i++) {
        b = chain(arr[i - 1]);
        for (j = 0; j < i; j++) {
            if (arr[j] == b) {
                c = 0; break;
            }
        }
        if (c == 1) {
            arr[i] = b;
        }
    }

    printf("%d\n", i - 1);

    for (j = 0; j < i - 1; j++) {
        printf("%d\n", arr[j]);
    }
    return 0;
}
