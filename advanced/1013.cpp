#include<cstdio>
#include<cstring>
#define maxn 1002
using namespace std;
struct node{
	int next;
	int to;
}edge[2*maxn*maxn];
int head[maxn],e;
bool visit[maxn]/*,disappear[maxn]*/;
void add(int u,int v){
	edge[++e].next=head[u];
	edge[e].to=v;
	head[u]=e;
	return ;
}
void dfs(int now,int from){
	visit[now]=true;
	for(int i=head[now];i!=0;i=edge[i].next){
		if(edge[i].to==from||/*disappear[edge[i].to]||*/visit[edge[i].to]) continue;
		dfs(edge[i].to,now);
	}
	return ;
}
int main(){
	int n,m,k;
	int u,v;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=m;i++){
		scanf("%d %d",&u,&v);
		add(u,v);add(v,u);
	}
	for(int i=1;i<=k;i++){
		int x,count=0;
		scanf("%d",&x);
//		int front=x,next=x;
//		disappear[x]=true;
		visit[x]=true;
		for(int i=1;i<=n;i++){
			if(!visit[i]){
				count++;
				dfs(i,0);
			}
		}
/*		for(int i=head[x];i!=0;i=edge[i].next){
//			printf("%d->%d\n",x,edge[i].to);
			if(!visit[edge[i].to]&&!disappear[edge[i].to]){
				count++;
				dfs(edge[i].to,x);
				next=edge[i].to;
				if(front!=x){
					add(front,next);add(next,front);
				}
				front=next;
			}
//			for(int i=1;i<=n;i++) printf("%d ",visit[i]);
		}*/
		count--;
		if(count<0) count=0;
		printf("%d\n",count);
		memset(visit,false,sizeof(bool)*(maxn+1));
	}
	return 0;
} 
