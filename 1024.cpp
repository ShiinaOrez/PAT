#include<cstdio>
#include<cstring>
using namespace std;
int m=0;//幂 
char s[10005];
bool key1=0,key2=0;//符号位 
int main(){
	scanf("%s",s);
	int len=strlen(s);
	if(s[0]=='+') key1=1;
	int p=1;
	while(s[p]!='E')
		p++;
	//p为E的位置
	if(s[p+1]=='+') key2=1;
	int tt=1;
	for(int i=len-1;i>=p+2;i--){
		m+=(s[i]-48)*tt;
		tt*=10;
	}
	if(key1==false) printf("-");
	if(key2==false){
		printf("0.");
		for(int i=1;i<m;i++) printf("0");
		tt=0;
		for(int i=1;i<p;i++){
			if((tt==0&&s[i]=='0')||s[i]=='.'){
				tt=-1;
				continue;
			}
			printf("%d",s[i]-48);
		}
	}
	else{
		int time=0;
		tt=1;//need to print .
		for(int i=1;i<p;i++){
			if(s[i]=='.') time++; 
			if(s[i]!='.') printf("%d",s[i]-48);
			if(time!=0){
				if(time==m){
					printf(".");
					time=0;
				}
				else time++;
			}
		}
		for(int i=1;i<=m-p+3;i++) printf("0");
	}
	return 0;
} 
 
