#include<cstdio>
#include<cstring>
using namespace std;
unsigned long long int n=0;
int l=0,y=0;
char s[100005];
int main(){
	gets(s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]<='z'&&s[i]>='a'){
			n+=s[i]-'a'+1;
		}
		if(s[i]<='Z'&&s[i]>='A'){
			n+=s[i]-'A'+1;
		}
	}
	unsigned long long int e=1;
	for(int i=1;i<=23;i++){
		if(e*2>n) break;
		e*=2;
	}
	while(n){
		e=n%2;
		if(e) y++;
		else l++;
		n/=2;
	}
	printf("%d %d",l,y);
	return 0;
}
