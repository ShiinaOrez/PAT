#include<cstdio>
using namespace std;
int n,m;
int a[200];
int main(){
	scanf("%d %d",&n,&m);
	m%=n;
	for(int i=1;i<=n;i++)  scanf("%d",&a[i]);
	for(int i=n-m+1;i<=n;i++)
		printf("%d ",a[i]);
	for(int i=1;i<=n-m;i++){
		printf("%d",a[i]);
		if(i!=n-m) printf(" ");
	}
	return 0;
}
