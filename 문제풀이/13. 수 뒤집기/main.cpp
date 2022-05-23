#include <stdio.h>
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int s=0,num,arr[10],len,i,k;
    scanf("%d",&num);
    k=num;
    while(num!=0){
    	s*=10;
		s+=num%10;
		num/=10;
	}
	num=k+s;
	len=-1;
	while(num!=0){
		len++; 
		arr[len]=num%10;
		num/=10;
	}
	for(i=0;i<=len;i++){
		if(arr[i]!=arr[len-i]){
		printf("NO");
		return 0;
		}
	} 
	printf("YES");
    return 0;
}
