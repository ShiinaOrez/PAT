#include<cstdio>
using namespace std;
long long int ans;
int n;
int num[15];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
		for(int j=1;j<i;j++){
			int f,b;
			f=num[i];
			b=num[j];
			if(f!=0) ans+=(f*10+b);
			f=num[j];
			b=num[i];
			if(f!=0) ans+=(f*10+b);
		}
	}
	printf("%lld",ans);
	return 0;
}
