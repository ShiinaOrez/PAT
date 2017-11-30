#include<cstdio>
#include<cmath>
#define CLK_TCK 100
using namespace std;
int main(){
	long long int c1,c2;
	scanf("%lld %lld",&c1,&c2);
	c2-=c1;
	double time=c2*1.00;
	c2/=CLK_TCK;
	time/=CLK_TCK;
	if(time-c2>=0.5)
		c2=ceil(time);
	else c2=floor(time); 
	int hour=c2/3600;
	c2%=3600;
	int min=c2/60;
	c2%=60;
	time=time-3600*hour-60*min;
	printf("%d",hour/10);
	hour%=10;
	printf("%d:",hour);
	printf("%d",min/10);
	min%=10;
	printf("%d:",min);
	printf("%d",c2/10);
	c2%=10;
	printf("%d",c2);
	return 0;
}
