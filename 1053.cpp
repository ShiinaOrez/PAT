#include<cstdio>
int n,d,k,me,mu;
double e;
char x=37;
int main(){
	scanf("%d %lf %d",&n,&e,&d);
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		double a;
		int c=0;
		for(int i=1;i<=k;i++){
			scanf("%lf",&a);
			if(a<e) c++;
		}
		if(c>k/2){
			if(k>d) mu++;
			else me++;
		}
	}
	double ans1,ans2;
	ans1=(1.000*me/n)*100;
	ans2=(1.000*mu/n)*100;
	printf("%.1f%c %.1f%c",ans1,x,ans2,x);
	return 0;
}
