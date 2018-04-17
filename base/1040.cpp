#include<cstdio>
#include<cstring>
#define C 1000000007
using namespace std;
unsigned long long int ans=0;
int prep[100005],prea[100005],pret[100005];
char s[100005];
int main(){
	scanf("%s",s);
	int len=strlen(s);
	int p=0,a=0,t=0;
	for(int i=0;i<len;i++){
		if(s[i]=='P')
			p++;
		if(s[i]=='A')
			a++;
		if(s[i]=='T')
			t++;
		prep[i]=p;prea[i]=a;pret[i]=t;
	}//Ç°×ººÍ
	for(int i=1;i<len-1;i++){
		if(s[i]=='A'){
			ans+=((prep[i]*(pret[len-1]-pret[i]))%C);
			ans%=C;
		}
	}
	printf("%llu",ans);
	return 0;
}
