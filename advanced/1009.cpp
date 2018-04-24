#include<cstdio>
#include<cmath>
#define maxn 2005
using namespace std;
struct num{
	int index;
	double w;
}a[12];
double ans[maxn];
int k1,k2,count;
int main(){
	scanf("%d",&k1);
	for(int i=1;i<=k1;i++){
		scanf("%d %lf",&a[i].index,&a[i].w);
	}
	scanf("%d",&k2);
	for(int i=1;i<=k2;i++){
		int x;double y;
		scanf("%d %lf",&x,&y);
		for(int j=1;j<=k1;j++){
			ans[a[j].index+x]+=a[j].w*y;
		}
	}
	for(int i=0;i<=2001;i++){
		if(fabs(ans[i])>1e-10) count++;
	}
	printf("%d",count);
	for(int i=2001;i>=0;i--){
		if(fabs(ans[i])>1e-10) printf(" %d %.1f",i,ans[i]);
	}
	return 0;
} 
