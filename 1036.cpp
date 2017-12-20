#include<cstdio>
using namespace std;
int main(){
	int n,m;
	char s;
	scanf("%d %c",&n,&s);
	m=n/2;
	if(n%2==1) m++;
	for(int i=1;i<=n;i++) printf("%c",s);
	for(int i=1;i<=m-2;i++){
		printf("\n%c",s);
		for(int i=1;i<=n-2;i++) printf(" ");
		printf("%c",s);
	}
	printf("\n");
	for(int i=1;i<=n;i++) printf("%c",s);
	return 0;
} 
