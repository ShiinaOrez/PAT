#include<cstdio>
#define maxn 10005
using namespace std;
int num[maxn];
int tot,sub=0;
int left=1,right,sub_l=1,sub_r;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	right=n;
	for(int i=1;i<=n;i++){
		if(sub>=0){
			sub+=num[i];
			sub_r=i;
		}
		else{
			sub=num[i];
			sub_l=i;
			sub_r=i;
		}
		if(sub>tot||(sub==0&&right==n)){
			tot=sub;
			left=sub_l;
			right=sub_r;
		}
	}
	printf("%d %d %d",tot,num[left],num[right]);
	return 0;
} 
