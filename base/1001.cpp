#include<cstdio>
using namespace std;
int n,count=0;
int main(){
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n/=2;
			count++;
		}
		else
			n=n*3+1;
	}
	printf("%d",count);
	return 0;
}
