#include<cstdio>
using namespace std;
int n;
int main(){
	long long int a,b,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true\n",i);
		}
		else{
			printf("Case #%d: false\n",i);
		}
	}
	return 0;
} 
