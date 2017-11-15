#include<cstdio>
using namespace std;
int n;
int main(){
	scanf("%d",&n);
	int b=n/100;
	int s=(n%100)/10;
	int g=(n%10);
	for(int i=1;i<=b;i++) printf("B");
	for(int i=1;i<=s;i++) printf("S");
	for(int i=1;i<=g;i++) printf("%d",i);
	return 0; 
} 
