#include<cstdio>
using namespace std;
struct node{
	int t[4]; 
	int tt[80];
}a,b;
int n,pa,pb;
char A[1],B[1];
int map[4][4];
int max(node x){
	int ans=66;
	if(x.tt[ans]<x.tt[67]) ans=67;
	if(x.tt[ans]<x.tt[74]) ans=74;
	return ans;
} 
int main(){
	a.tt[1]=67;a.tt[2]=74;a.tt[3]=66;
	b.tt[1]=67;b.tt[2]=74;b.tt[3]=66;
	map[1][1]=2;map[2][2]=2;map[3][3]=2;
	map[1][2]=1;map[1][3]=0;
	map[2][1]=0;map[2][3]=1;
	map[3][1]=1;map[3][2]=0;
	scanf("%d",&n);
	int pa=0,p2=0;
	for(int i=1;i<=n;i++){
		scanf("%s %s",A,B);
		if(A[0]=='C') pa=1;
		if(A[0]=='J') pa=2;
		if(A[0]=='B') pa=3;
		if(B[0]=='C') pb=1;
		if(B[0]=='J') pb=2;
		if(B[0]=='B') pb=3;
		a.t[map[pa][pb]]++;
		if(map[pa][pb]) a.tt[a.tt[pa]]++;
		b.t[map[pb][pa]]++;
		if(map[pb][pa]) b.tt[a.tt[pb]]++;
	}
	printf("%d %d %d\n",a.t[1],a.t[2],a.t[0]);
	printf("%d %d %d\n",b.t[1],b.t[2],b.t[0]);
	int ans_a=max(a);
	int ans_b=max(b);
	ans_a=char(ans_a);
	ans_b=char(ans_b); 
	printf("%c %c",ans_a,ans_b);
	return 0;
}
