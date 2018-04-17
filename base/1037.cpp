#include<cstdio>
using namespace std;
int main(){
	bool t=1;
	unsigned long long int g,s,k,count1,count2;
	scanf("%llu.%llu.%llu",&g,&s,&k);
	count1=g*17*29+s*29+k;
	scanf("%llu.%llu.%llu",&g,&s,&k);
	count2=g*17*29+s*29+k;
	if(count1>count2) t=0;
	if(t) count2-=count1;
	else count2=count1-count2;
	g=count2/(17*29);
	count2%=(17*29);
	s=count2/29;
	count2%=29;
	k=count2;
	if(t==false) printf("-");
	printf("%llu.%llu.%llu",g,s,k);
	return 0;
} 
