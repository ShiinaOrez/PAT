#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
struct node{
	char s[81];
}ss[40];
char a[81];
int main(){
	int p1=1;
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		int p2=0;
		while(a[i]!=' '){
			ss[p1].s[p2]=a[i];
			i++;
			p2++;
		}
		p1++;
	} 
	for(int i=p1-1;i>=1;i--){
		printf("%s",ss[i].s);
		if(i!=1) printf(" ");
	}
	return 0;
}
