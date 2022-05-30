#include <iostream>
using namespace std;

int n;
int arr[100][100];
int memo[100][100];

void init(int val)
{
   for(int i=0; i<100; i++)
   {
      for(int j=0; j<100; j++)
      {
         memo[i][j] = val;
      }
   }
}

bool jump(int x, int y)
{
   if(x>=n || y>=n) return false;
   int jumpSize = arr[x][y];
   if(jumpSize == 0) return true;
   if(memo[x][y]!=-1) return memo[x][y];
   memo[x][y] = jump(x, y+jumpSize) || jump(x+jumpSize, y);
   return memo[x][y];
}

int main() {
   
   init(-1);
   cin >> n;
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
         cin >> arr[i][j];
      }
   }
   if(jump(0,0)) cout << "YES" << endl;
   else cout << "NO" << endl;
   
   return 0;
}
