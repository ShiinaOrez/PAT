#include<cstdio>
using namespace std;
int num[10]; 
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	a+=b;
	if(a<0){
		printf("-");
		a*=(-1);
	}
	int k=-1;
	if(a==0){
		printf("0");
		return 0;
	}
	while(a!=0){
		k++;
		num[k]=a%10;
		a/=10;
	}
	int count=0;
/*	for(int i=k;i>=0;i--){
		printf("%d",num[i]);
		count++;
		if(count==3&&i>0) {
			printf(",");
			count=0;
		}
	}*/
	for(int i=k;i>=0;i--){
		printf("%d",num[i]);
		if(i%3==0&&i>0){
			printf(",");
		}
	}
	return 0;
} 
