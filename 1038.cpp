#include<cstdio>
using namespace std;
int bucket[105];
int n,a;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		bucket[a]++;
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		printf("%d",bucket[a]);
		if(i!=n) printf(" ");
	}
	return 0;
} 
