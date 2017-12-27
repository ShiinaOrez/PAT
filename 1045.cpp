#include<cstdio>
#include<algorithm>
#define maxn 100005
using namespace std;
int n;
long long int a[maxn],mini[maxn],maxi[maxn],ans[maxn];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		if(a[i]>maxi[i-1])
			maxi[i]=a[i];
		else maxi[i]=maxi[i-1];
	}
	mini[n+1]=maxi[n]+1;
	for(int i=n;i>=1;i--){
		if(a[i]<mini[i+1])
			mini[i]=a[i];
		else mini[i]=mini[i+1]; 
	}
	int c=0;
	for(int i=1;i<=n;i++){
		if(a[i]>maxi[i-1]&&a[i]<mini[i+1]){
			c++;
			ans[c]=a[i];
		}
	}
	if(c==0){
		printf("0\n\n");return 0;
	}
    sort(ans+1,ans+c);
	printf("%d\n",c);
	for(int i=1;i<=c;i++){
		printf("%lld",ans[i]);
		if(i!=c) printf(" ");
	}
	return 0;
}
