#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,i,j;
	vector<int> p;
	int k[15],cnt=0;
	scanf("%d %d",&i,&j);
	for(int a=1;a<=i;a++){
		int t= a;
		while (t){
			k[cnt++] = t%10;
			t/=10;
		}
		for(int b=cnt-1;b>=0;b--){
			p.push_back(k[b]);
			k[b]=0;
		}
		cnt=0;
		
	}
	cnt=0; 
	for(int b=0;b<p.size()-1;b++){
		if(j/10 == p[b] && j%10 == p[b+1])
			cnt++;
	}
	printf("%d",cnt);
}
