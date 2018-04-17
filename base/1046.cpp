#include<cstdio>
using namespace std;
int n,a,b;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int p1,p2,c1,c2;
		scanf("%d %d %d %d",&p1,&c1,&p2,&c2);
		if(c1==p1+p2&&c2!=p1+p2) a++;
		if(c1!=p1+p2&&c2==p1+p2) b++;
	}
	printf("%d %d",b,a);
	return 0;
}
