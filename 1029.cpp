#include<cstdio>
#include<cstring>
using namespace std;
char a[85],b[85];
int s[128];
int main(){
	scanf("%s %s",a,b);
	int len_a=strlen(a);
	int len_b=strlen(b);
	for(int i=0;i<len_b;i++)
		s[b[i]]=1;
	for(int i=0;i<len_a;i++){
		if(s[a[i]]==0){
			if(a[i]>=97&&a[i]<=122){
				printf("%c",a[i]-32);
				s[a[i]]=1;
				s[a[i]-32]=1;
				continue;
			}
			if(a[i]>=65&&a[i]<=90){
				s[a[i]+32]=1;
			}
			printf("%c",a[i]);
			s[a[i]]=1;
		}
	}
	return 0;
}
