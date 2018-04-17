#include<cstdio>
#include<cstring>
using namespace std;
struct node{
	char s[20];
	int k;
}a[1005];
char ss[20];
int n,x,y;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %d %d",ss,&x,&y);
		a[x].k=y;
		strcpy(a[x].s,ss);
	} 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		printf("%s %d\n",a[x].s,a[x].k);
	}
	return 0;
}
