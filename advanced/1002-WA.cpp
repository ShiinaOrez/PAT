#include<cstdio>
using namespace std;
double num[1005];
int main(){
	int a,count=0,k;
	double b;
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		scanf("%d %lf",&a,&b);
//		if(num[a]==0) count++;
		num[a]+=b;
	}
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		scanf("%d %lf",&a,&b);
//		if(num[a]==0) count++;
		num[a]+=b;
	}
	for(int i=0;i<=1001;i++) 
		if(num[i]>0) count++;
	printf("%d",count);
	for(int i=1001;i>=0;i--){
		if(num[i]>0){
			printf(" %d %.1lf",i,num[i]);
	
		}
	}
	printf("\n");
	return 0;
}
