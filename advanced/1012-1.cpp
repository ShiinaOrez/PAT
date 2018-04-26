#include<cstdio>
#include<algorithm>
#define maxn 1000002
using namespace std;
struct node{
	int id;
	int de;
}a[maxn],c[maxn],m[maxn],e[maxn];
struct r{
	int w;
	char name;
}_rank[maxn];
bool comp(node p1,node p2){
	return p1.de>p2.de? true : false ;
}
void set(int id){
	a[id].id=id;
	c[id].id=id;
	m[id].id=id;
	e[id].id=id;
	return ;
}
int n,M;
int main(){
	scanf("%d %d",&n,&M);
	for(int i=0;i<=maxn;i++)
	    a[i].de=-1;
	for(int i=1;i<=n;i++){
		int id;
		scanf("%d",&id);
		scanf("%d %d %d",&c[id].de,&m[id].de,&e[id].de);
		a[id].de=(c[id].de+m[id].de+e[id].de)/3;
		set(id);
	}
	sort(a,a+maxn,comp);
	sort(c,c+maxn,comp);
	sort(m,m+maxn,comp);
	sort(e,e+maxn,comp);
	for(int i=0;i<n;i++){
		_rank[a[i].id].w=i+1;
		_rank[a[i].id].name='A';
	}		
	for(int i=0;i<n;i++){
		if(i+1<_rank[c[i].id].w){
			_rank[c[i].id].w=i+1; 
			_rank[c[i].id].name='C';
		}
		if(i+1<_rank[m[i].id].w){
			_rank[m[i].id].w=i+1;
			_rank[m[i].id].name='M';
		}
		if(i+1<_rank[e[i].id].w){
			_rank[e[i].id].w=i+1;
			_rank[e[i].id].name='E';
		}
	}
	for(int i=1;i<=M;i++){
		int id;
		scanf("%d",&id);
		if(!_rank[id].w) printf("N/A\n");
		else{
			printf("%d %c\n",_rank[id].w,_rank[id].name);
		}
	}
	return 0;
}
