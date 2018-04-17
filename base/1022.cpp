#include<cstdio>
#include<cmath>
using namespace std;
long long int tot;
int a,b,d;
int num[40];
void func(){
	long long int tt=1;
	int k=0;
	while(tot>tt){
		tt*=d;
		k++;
	}
	tt/=d;
	for(int i=k-1;i>=0;i--){
		num[i]=tot/tt;
		tot%=tt;
		tt/=d;
	}
	return ;
}
int main(){
	scanf("%d%d",&a,&b);
	tot=a+b;
	scanf("%d",&d);
	func();
	int p=40;
	while(num[p]==0) p--;
	for(int i=p;i>=0;i--) printf("%d",num[i]);
	return 0;
}
