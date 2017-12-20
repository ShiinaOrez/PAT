#include<cstdio>//随手一写过了5个点！开心，让我不思进取一会吧哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈 
#include<algorithm>
using namespace std;
int r[105],pre[105];
int n;
bool comp(const int p1,const int p2){
	return p1<p2?true:false;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&r[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&pre[i]);
	bool s=1,type=0;
	int p=1;
	for(int i=2;i<=n;i++){
		if(s==1&&pre[i]>=pre[i-1]) continue;
		else if(s==1){
			s=0;
			p=i;
		}
		if(s==0){
			if(pre[i]==r[i]) continue;
			else {
				type=1;
				break;
			}
		}
	}
	if(type) printf("Merge Sort\n");
	else printf("Insertion Sort\n");
	if(type){
		int q=1,c=1;
		while(q<=n){
			c=q;
			while(pre[q+1]>=pre[q]) q++;
			q++;
			while(pre[q+1]>=pre[q]) q++;
			if(q>n) q=n;
			sort(pre+c,pre+q,comp);
			q++;
		}
		for(int i=1;i<=n;i++){
			printf("%d",pre[i]);
			if(i!=n) printf(" ");
		}
	}
	else{
		int a=pre[p];
		for(int i=1;i<p;i++){
			if(a<pre[i]){
				printf("%d ",a);
				a=9999999;
			}
			printf("%d",pre[i]);
			if(i!=n) printf(" ");
		}
		for(int i=p+1;i<=n;i++){
			printf("%d",pre[i]);
			if(i!=n) printf(" ");
		}
	}
	return 0;
}
