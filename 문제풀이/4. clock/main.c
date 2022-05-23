#include <stdio.h>
struct P{
	int x,y;
	float z;
};
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	struct P arr[6];
	int i,j,n;
	float k,c,t,e;	
	for(i=1;i<=5;i++){
		scanf("%f:%f",&t,&k);
		arr[i].x = t;
		arr[i].y = k;
		if(t>=12)
			t-=12;  
		t=t*30+k*0.5; //시침각    
		k=k*6; //분침각             
		if(t<k){
			c=k-t;         
		}
		else{
			c=t-k;
		}
		if(c>180){
			c=360-c;
		}	
		arr[i].z=c;
	}
	for(n=1;n<=5;n++){
		for(j=0;j<i;j++){
			if(arr[j].z>arr[n].z){
				int m;
					m=arr[j].x;
					arr[j].x=arr[n].x;
					arr[n].x=m;
				int h;
					h=arr[j].y;
					arr[j].y=arr[n].y;
					arr[n].y=h;
				float k;
					k=arr[j].z;
					arr[j].z=arr[n].z;
					arr[n].z=k;
			}
			else if(arr[j].z==arr[n].z){
				if (arr[j].x>arr[n].x){
					int m;
						m=arr[j].x;
						arr[j].x=arr[n].x;
						arr[n].x=m;
					int h;
						h=arr[j].y;
						arr[j].y=arr[n].y;
						arr[n].y=h;	
					float k;
						k=arr[j].z;
						arr[j].z=arr[n].z;
						arr[n].z=k;
				}
				else if(arr[j].x == arr[n].x){
					if(arr[j].y>arr[n].y){
						int m;
							m=arr[j].x;
							arr[j].x=arr[n].x;
							arr[n].x=m;	
						int h;
							h=arr[j].y;
							arr[j].y=arr[n].y;
							arr[n].y=h;						
						float k;
							k=arr[j].z;
							arr[j].z=arr[n].z;
							arr[n].z=k;
					}	
				}
			}
		}
	}
	printf("\n%02d:%02d",arr[3].x, arr[3].y);
	return 0;
}
