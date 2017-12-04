#define maxn 100005
#include<cstdio>
#include<algorithm>
using namespace std;
int n,P,p,start,now,ans=0;
int a[maxn],pre[maxn];
struct node{
	int w;
	int tot;
}b[maxn];
bool comp(const int p1,const int p2){
	if(p1<p2) return true;
	else return false;
}
int main(){
	scanf("%d %d",&n,&P);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1,comp);
	int p=1;
	for(int i=1;i<=n;){
		b[p].w=a[i];
		b[p].tot++;
		i++;
		while(a[i]==a[i-1]){
			b[p].tot++;
			i++;
		}
		p++;
	}
	p--;
	pre[0]=0;
	for(int i=1;i<=p;i++)
		pre[i]=pre[i-1]+b[i].tot;
	for(int i=1;i<=p;i++)
		if(b[p].w>b[i].w*P){
			start=i-1;
		}
	for(int i=1;i<=start;i++){
		for(int j=p;j>start;j--){
			if(b[j].w<=b[i].w*P){
				now=j;
				break;
			}
		}
		int count=pre[now]-pre[i-1];
		if(count>ans) ans=count;
	}
	printf("%d",ans);
	return 0;
} 
