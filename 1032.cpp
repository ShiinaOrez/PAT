#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int sc;
	int count;
}a[100005];
int n,maxi=0;
bool comp(node p1,node p2){
	return p1.count>p2.count?true:false;
}
int main(){
	int s,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&s,&c);
		if(s>maxi) maxi=s;
		a[s].count+=c;
	}
	for(int i=1;i<=maxi;i++) a[i].sc=i;
	sort(a+1,a+maxi,comp);
	printf("%d %d",a[1].sc,a[1].count);
	return 0;
} 
