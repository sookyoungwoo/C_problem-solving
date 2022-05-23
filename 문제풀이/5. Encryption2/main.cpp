#include <stdio.h> 
#include<string.h>
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i,j,b,u,su;
	char arr[205];
	gets(arr);
	b = strlen(arr);
	u=b/6;
	if(b%6!=0){
		u+=1;
	}
	char num[u+1][7];
	for(i=b;i<b+6;i++){
		arr[i]='.';
	}
	for(i=0;i<u*6;i++){
		if(arr[i]==' '){
			su=1;
			arr[i]='*';
		}
		else if(arr[i]=='*'){
			arr[i]=' ';
			su=2;
		}
		
	}
	/*for(i=0;i<u*6;i++){
		printf("%c",arr[i]);
	}
	//printf("\n%d %d\n",u*6, b);*/
	if(su==1){
		int cnt=0,k=0;
		for(i=0;i<u*6;i++){
			num[k][cnt++] = arr[i];
			if(cnt == 6){
				cnt=0;
				k++;
			}
		}
		/*for(j=0;j<u;j++){
			for(i=0;i<6;i++){
				printf("%c",num[j][i]);
			}
			printf("\n");
		}*/
	
	//	printf("\n");
	
		for(i=0;i<6;i++){
			for(j=0;j<u;j++){
				printf("%c",num[j][i]);
			}
		}
	}	
	if(su==2){
		int cnt=0,k=0;
		for(i=0;i<u*6;i++){
			num[cnt++][k] = arr[i];
			if(cnt == u){
				cnt=0;
				k++;
			}
		}
		//printf("%d\n",k);
		for(i=0;i<u;i++){
			for(j=0;j<6;j++){
				if(num[i][j]=='.')break;
				printf("%c",num[i][j]);
			}
		}
	}		
	return 0;
}
//Attack at dawn or we are done for
