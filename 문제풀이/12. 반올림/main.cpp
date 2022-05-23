#include <stdio.h>
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int k,arr[100]={0},cnt=0;
	scanf("%d",&k);
	while(k){
		arr[cnt++]=k%10;
		k/=10;
	}
	for(int a=0;a<3;a++){
		int res[100]={0},z=0;
		for(int b=cnt-1;b>a+1;b--){
			//printf("%d",arr[b]);
			res[z++]=arr[b];
		}
		if(arr[a]>=5){
			//printf("%d",arr[a+1]+1);
			res[z++]=arr[a+1]+1;
		}
		else{
			//printf("%d",arr[a+1]);
			res[z++]=arr[a+1]+1;
		}
		for(int b=0;b<=a;b++){
			//printf("0");
			res[z++]=0;
		}
		for(int t=z-1;t>0;t--){
			if(res[t]>=10){
				res[t]-=10;
				res[t-1]++;
			}
		}
		for(int t=0;t<z;t++){
			printf("%d",res[t]);
		}
		printf("\n");
	}
	return 0;
}
