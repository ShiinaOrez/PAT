#include<cstdio>
#include<algorithm>
#define maxn 2005
using namespace std;
struct node{
	int id;
	int a;int c;int m;int e;
}stu[maxn];
struct r{
	int w;
	char name;
}_rank[1000005];
//int _rank[1000005];
int n,m;
bool compc(node p1,node p2){
	return p1.c>p2.c? true : false;
}
bool compm(node p1,node p2){
	return p1.m>p2.m? true : false; 
}
bool compe(node p1,node p2){
	return p1.e>p2.e? true : false;
}
bool compa(node p1,node p2){
	return p1.a>p2.a? true : false;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&stu[i].id,&stu[i].c,&stu[i].m,&stu[i].e);
		stu[i].a=(stu[i].c+stu[i].e+stu[i].m)/3;
	}
	sort(stu,stu+n,compa);
	for(int i=0;i<n;i++){
		int k=i+1;
		while(stu[i].a==stu[i+1].a){
			_rank[stu[i].id].w=k;
		    _rank[stu[i].id].name='A';
		    i++;
		}
		_rank[stu[i].id].w=k;
		_rank[stu[i].id].name='A';
	}
	sort(stu,stu+n,compc);
	for(int i=0;i<n;i++){
		int k=i+1;
		while(stu[k-1].c==stu[k-2].c) k--;
		if(k<_rank[stu[i].id].w){
			_rank[stu[i].id].w=k;
			_rank[stu[i].id].name='C';
		}
	}
	sort(stu,stu+n,compm);
	for(int i=0;i<n;i++){
		int k=i+1;
		while(stu[k-1].c==stu[k-2].c) k--;
		if(k<_rank[stu[i].id].w){
			_rank[stu[i].id].w=k;
			_rank[stu[i].id].name='M';
		}
	}
	sort(stu,stu+n,compe);
	for(int i=0;i<n;i++){
		int k=i+1;
		while(stu[k-1].c==stu[k-2].c) k--;
		if(k<_rank[stu[i].id].w){
			_rank[stu[i].id].w=k;
			_rank[stu[i].id].name='E';
		}
	}
	for(int i=1;i<=m;i++){
		int id;
		scanf("%d",&id);
		if(!_rank[id].w)
		    printf("N/A\n");
		else printf("%d %c\n",_rank[id].w,_rank[id].name);
	} 
	return 0; 
}
