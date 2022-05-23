#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    int i,j;
    cin >> a >> b;
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            cout << "*" ;
        }
        cout << "\n";
    }
    return 0;
}
