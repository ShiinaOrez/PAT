#include<cstdio>
#define maxn 105
using namespace std;
bool relation[maxn][maxn];
int count[maxn];
int n,m,max_deep=0;
void dfs(int now,int deep){
	if(deep>max_deep) max_deep=deep;
	if(relation[now][0]==false){
		count[deep]++;
	}
	else{
		for(int i=1;i<=n;i++){
			if(relation[now][i]){
				dfs(i,deep+1);
			}
		}
	}
	return ;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=m;i++){
		int fa,son,k;
		scanf("%d %d",&fa,&k);
		for(int j=1;j<=k;j++){
			scanf("%d",&son);
			relation[fa][son]=true;
			relation[fa][0]=true;
		}
	}
	dfs(1,1);
	for(int i=1;i<=max_deep;i++){
		printf("%d",count[i]);
		if(i<max_deep) printf(" ");
	}
	return 0;
}
