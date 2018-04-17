#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int bucket[200];
int main(){
	char s[1005];
	gets(s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		bucket[s[i]]++;
	} 
	for(int i='a';i<='z';i++){
		bucket[i]+=bucket[i+('A'-'a')];
	}
	int max='a';
	for(int i='a'+1;i<='z';i++){
		if(bucket[i]>bucket[max])
			max=i;
	}
	printf("%c %d",max,bucket[max]);
	return 0;
}
