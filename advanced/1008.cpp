#include<cstdio>
using namespace std;
int main(){
	int b=0,f,n;
	unsigned long long int count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&f);
		if(f>b) {
			count+=(f-b)*6+5;
		}
		else count+=(b-f)*4+5;
		b=f;
	}
	printf("%llu",count);
	return 0;
}
