#include <iostream>
int main(){
	int n,m,a[100],b[100],c[100],k[100],u,v,w;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a]i,&b,[i]&c)[i];
		k=a/b;
	}
	for(i=0;i<n;i++){
		if(k[i]>k[i+1]){
			k[i+1]=u;
		}
	}
	u=*c;
	for(j=1;j<=u;j++){
		m-1;
		if(m==0){
			break;
			m=j;
			printf("%d",m);
		}
	}
	
	
	for(i=0;i<n;i++){
		if(k[i]>k[i+1] && k[i]<k[i+2] || k[i]<k[i+1] && k[i]>k[i+2]){
			k[i+1]=v;
		}
	}
	v*=c;
	for(j=1;j<=v;j++){
		m-1;
		if(m==0){
			break;
			m=u+j;
			printf("%d",m);
		}
	}
	
	
	
	for(i=0;i<n;i++){
		if(k[i]<k[i+1] && k[i]<k[i+2]){
			k[i+1]=w;
		}
	}
	w*=c;
	for(j=1;j<=w;j++){
		m-1;
		if(m==0){
			break;
			m=u+v+j;
			printf("%d",m);
		}
			
			
	}
	
	}
}
