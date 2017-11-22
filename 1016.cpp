#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char a[11],b[11];
int da,db;
unsigned long long int func(unsigned long long int x,int y){
	return x*10+y;
}
int main(){
	unsigned long long int pa=0,pb=0;
	scanf("%s %d %s %d",a,&da,b,&db);
	int len_a=strlen(a);
	int len_b=strlen(b);
	for(int i=0;i<len_a;i++)
		if(a[i]-48==da)
			pa=func(pa,da);
	for(int i=0;i<len_b;i++)
		if(b[i]-48==db)
			pb=func(pb,db);
	printf("%llu",pa+pb);
	return 0;
} 
