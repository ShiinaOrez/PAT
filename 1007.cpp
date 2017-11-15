#include<cstdio>
using namespace std;
int n,count=0;
bool prim(int x){
	int h=2;
	while(h<(x/h+1)){
		if(x%h==0) return false;
		h++;
	}
	return true;
}
int main(){
	scanf("%d",&n);
	int pre=2;
	for(int i=3;i<=n;i++){
		if(prim(i)){
			if(i-pre==2) count++;
			pre=i;
		}
	}
	printf("%d",count);
	return 0;
}
