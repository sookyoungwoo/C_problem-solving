#include <stdio.h>
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int a, b,d=0,e[500],i,j,f;
	char c[500][500];
    scanf("%d %d ", &a, &b);
    for(i=0;i<a;i++){
        gets(c[i]);
    }
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
    		if (c[j][i] == '1'){
                d++;
            }
        }
        e[i]=d;
        d=0;
    }
    f=e[0];
    for(i=0;i<b;i++){
        if(f>e[i]){
            f=e[i];
        }
    }
    for (i=0;i<a;i++){
        for (j=0;j<b;j++){
            if (a-i>e[j]-f){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
