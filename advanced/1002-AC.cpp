#include<cstdio>
using namespace std;
int ans[1005];
double res[1005];
int main(){
	int k,a;
	double b;
	for(int j=0;j<2;j++){
		scanf("%d",&k);
		for(int i=0;i<k;i++){
			scanf("%d %lf",&a,&b);
			res[a]+=b; 
		}
	}
	k=0;
	for(int i=1004;i>=0;i--){
		if(res[i]!=0){
			ans[k]=i;
			k++;
		}
	}
	printf("%d",k);
	for(int i=0;i<k;i++){
		printf(" %d %.1f",ans[i],res[ans[i]]);
	}
	printf("\n");
	return 0;
}
