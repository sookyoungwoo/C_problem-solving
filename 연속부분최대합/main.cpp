#pragma warning(disable : 4996)
#include<bits/stdc++.h>
using namespace std;
int st, fi, rst;
int su, arr[222222], best, basic;
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &su);
    for (int a = 0; a < su; a++)
		scanf("%d", &arr[a]);
    best = basic = arr[0];
    for (int a = 1; a < su; a++) {
        if (arr[a] > arr[a] + basic) {
            st = a + 1;
            basic = arr[a];
        }
        else {
            basic += arr[a];
        }
        if (basic > best) {
            rst = st;
            fi = a + 1;
            best = basic;
        }
    }
    if (rst == 0)
		rst = 1;
    if (fi == 0)
		fi = 1;
    printf("%d %d %d", rst, fi, best);
    return 0;
}
