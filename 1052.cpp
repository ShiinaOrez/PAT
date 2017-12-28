#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
struct node{
	char emoji[6];
}set[4][11];
char s[150],x=92;
int p[4],k;
int main(){
	for(int i=1;i<=3;i++){
		gets(s);
		int len=strlen(s);
		for(int j=0;j<len;j++){
			if(s[j]=='['){
				p[i]++;
				int a=j+1;
				for(j++;s[j]!=']'&&j<len;j++){
					set[i][p[i]].emoji[j-a]=s[j];
				}
			}
		}
	}
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		int a,b,c,d,e;
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		if(a>p[1]||e>p[1]||b>p[2]||d>p[2]||c>p[3]||a<1||b<1||c<1||d<1||e<1){
			printf("Are you kidding me? @%c/@\n",x);
			continue;;
		}
		else{
			printf("%s(%s%s%s)%s\n",set[1][a].emoji,set[2][b].emoji,set[3][c].emoji,set[2][d].emoji,set[1][e].emoji);
		}
	}
	return 0;
}
