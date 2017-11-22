#include<cstdio>
using namespace std;
struct node{
	int t[4]; 
	int tt[128];
}a,b;
int n,pa,pb;
char A,B;
int map[4][4];
int max(node x){
	int ans=82;
	if(x.tt[ans]<x.tt[90]) ans=90;
	if(x.tt[ans]<x.tt[83]) ans=83;
	return ans;
} 
int main(){
	a.tt[1]=83;a.tt[2]=90;a.tt[3]=82;
	b.tt[1]=83;b.tt[2]=90;b.tt[3]=82;
	map[1][1]=2;map[2][2]=2;map[3][3]=2;
	map[1][2]=1;map[1][3]=0;
	map[2][1]=0;map[2][3]=1;
	map[3][1]=1;map[3][2]=0;
	scanf("%d",&n);
	int pa=0,p2=0;
	for(int i=1;i<=n;i++){
		scanf("%c %c",&A,&B);
		if(A=='C') pa=1;
		if(A=='J') pa=2;
		if(A=='B') pa=3;
		if(B=='C') pb=1;
		if(B=='J') pb=2;
		if(B=='B') pb=3;
		a.t[map[pa][pb]]++;
		if(map[pa][pb]) a.tt[a.tt[pa]]++;
		b.t[map[pb][pa]]++;
		if(map[pb][pa]) a.tt[a.tt[pb]]++;
	}
	printf("%d %d %d\n",a.t[1],a.t[2],a.t[0]);
	printf("%d %d %d\n",b.t[1],b.t[2],b.t[0]);
	int ans_a=max(a);
	int ans_b=max(b);
	printf("%c %c",char(ans_a),char(ans_b));
	return 0;
}
