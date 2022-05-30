#include <iostream>
using namespace std;
int n;
int board[100][100];
int possibility[100][100];
bool jump(int x, int y) {
  for(int i = n - 1; i >= x; i--) {
        for(int j = n - 1; j >= y; j--) {
            if(i == n - 1 && j == n - 1) possibility[n - 1][n - 1] = 1;
            int jumpSize = board[i][j];
            if(i + jumpSize >= n && j + jumpSize >= n) possibility[i][j] = 0;
            else if(i + jumpSize >= n) possibility[i][j] = possibility[i][j + jumpSize];
            else if(j + jumpSize >= n) possibility[i][j] = possibility[i + jumpSize][j];
            else possibility[i][j] = possibility[i + jumpSize][j] || possibility[i][j + jumpSize];
        }
    }
    return possibility[x][y];
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    if(jump(0, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}
