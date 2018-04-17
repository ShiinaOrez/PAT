#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int f[100000000],a[105],ans[105];
void func(int x){
	if(x%2==0) x/=2;
	else x=x*3+1;
	while(x!=1){
		f[x]=1;
		if(x%2==0)
		{
			x/=2;
			continue;
		 } 
		if(x%2==1) x=x*3+1;
	}
	return ;
}
bool comp(const int p1,const int p2){
	if(p1<p2) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		func(a[i]);
	}
	sort(a+1,a+1+n,comp);
	int t=0;
	for(int i=n;i>=1;i--){
		if(f[a[i]]==0){
			t++;
			ans[t]=a[i];
		}
	}
	for(int i=1;i<=t;i++){
		printf("%d",ans[i]);
		if(i!=t) printf(" ");
	}
	return 0;
} 
