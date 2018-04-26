#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int id;
	int c;
	int m;
	int e;
	int a;
}stu[1000005];
int ans[1000005];
char sub[1000005];
//int _class['M'+1];
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
int m,n;
int main(){
/*	_class['A']=3;
	_class['C']=2;
	_class['M']=1;*/
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		int id;
		scanf("%d",&id);
		scanf("%d %d %d",&stu[id].c,&stu[id].m,&stu[id].e);
		stu[id].a=(stu[id].c+stu[id].e+stu[id].m)/3;
		stu[id].id=id;
	}
	sort(stu,stu+999999+1,compa);
	int k=0;
	while(stu[k].a!=0){
		sub[stu[k].id]='A';
		ans[stu[k].id]=++k;
//		printf("%d-%d: %d\n",k-1,stu[k-1].id,stu[k-1].a);
	}
	sort(stu,stu+n,compc);
	for(int i=0;i<n;i++){
		if(i+1<ans[stu[i].id]){
			sub[stu[i].id]='C';
			ans[stu[i].id]=i+1;
		}
	}
	sort(stu,stu+n,compm);
	for(int i=0;i<n;i++){
		if(i+1<ans[stu[i].id]){
			sub[stu[i].id]='M';
			ans[stu[i].id]=i+1;
		}
	}
	sort(stu,stu+n,compe);
	for(int i=0;i<n;i++){
		if(i+1<ans[stu[i].id]){
			sub[stu[i].id]='E';
			ans[stu[i].id]=i+1;
		}
	}
	for(int i=1;i<=m;i++){
		int id;
		scanf("%d",&id);
		if(!ans[id]){
			printf("N/A\n");
		}
		else{
			printf("%d %c\n",ans[id],sub[id]);
		}
	}
	return 0;
} 
