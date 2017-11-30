#include<cstdio>
using namespace std;
char s;
int n;
int print[1000];
int main(){
	scanf("%d %c",&n,&s);
	int tot=0,r=0;
	for(int i=1;;i+=2){
		tot+=i;
		r++;
		if(tot*2-1>n){
			tot-=i;
			r--;
		}
	}
	print[1]=1;
	for(int i=2;i<=r;i++) print[i]=print[i-1]+2;
	for(int i=r;i>=1;i--){
		for(int i)
	}
}
