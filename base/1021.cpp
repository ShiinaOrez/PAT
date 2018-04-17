#include<cstdio>
#include<cstring>
using namespace std;
char s[1005];
int num[1005];
int bucket[11];
int main(){
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++)
		num[i]=s[i]-48;
	for(int i=0;i<len;i++)
		bucket[num[i]]++;
	for(int i=0;i<=9;i++){
		if(bucket[i]==0) continue;
		else
			printf("%d:%d\n",i,bucket[i]);
	}
	return 0;
} 
