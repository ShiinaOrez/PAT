#define maxn 20
#include<cstdio>
#include<cstring>
using namespace std;
struct node{
	char s[maxn];
	bool key;
}a[105];
char m[11];
int n,count;
bool check(int t,char k){
	if(m[t]==k) return true;
	else return false;
}
int main(){
	strcpy(m,"10X98765432");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%s",a[i].s);
	for(int i=1;i<=n;i++){
		a[i].key=true;
		for(int j=0;j<=16;j++){
			int b=a[i].s[j]-48;
			count=1;
			if(b<0||b>9){
				a[i].key=false;
				break;
			}
			else{
				count+=b;
			}
			count%=11;
			a[i].key=check(count,a[i].s[17]);
		}
		printf("%d ",count);
	}
	bool ans=1;
	for(int i=1;i<=n;i++){
		if(a[i].key==0){
			printf("%s\n",a[i].s);
			ans=0;
		}
	}
	if(ans==true) printf("All passed");
	return 0;
} 
