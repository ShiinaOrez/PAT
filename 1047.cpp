#include<cstdio>
using namespace std;
int team[1005];
int n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a,b,c;
		scanf("%d-%d %d",&a,&b,&c);
		team[a]+=c;
	}
	int ans,maxi=0;
	for(int i=1;i<=1000;i++){
		if(team[i]>maxi){
			ans=i;
			maxi=team[i];
		}
	}
	printf("%d %d",ans,maxi);
	return 0;
}
