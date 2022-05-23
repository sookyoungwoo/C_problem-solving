#include <stdio.h>
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,num,arr[10000]={0},cnt=0,l=0,k;
    scanf("%d", &num);
    while(num){
    	arr[cnt++]=num%2;
    	num/=2;
	}
	for(k=cnt-1;k>=0;k--){
		l++;
		if(arr[k]==1){
			printf("%d ",l);
		}
	}
	return 0;
}
