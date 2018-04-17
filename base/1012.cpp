#include<cstdio>
using namespace std;
int n,a1=0,a2=0,a3=0,a4=0,a5=0,aa2=0,aa4=0;
int a[1005];
int main(){
	bool key=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		int res=a[i]%5;
		if(res==0&&a[i]%2==0){
			a1+=a[i];
		}
		if(res==1){
			key=1;
			aa2++;
			if(aa2%2==1) a2+=a[i];
			else a2-=a[i];
		}
		if(res==2) a3++;
		if(res==3){
			a4++;
			aa4+=a[i];
		} 	
		if(res==4)
			if(a[i]>a5) a5=a[i];
	}
	if(a1==0) printf("N ");
	else printf("%d ",a1);
	if(a2==0&&key==0) printf("N ");
	else printf("%d ",a2);
	if(a3==0) printf("N ");
	else printf("%d ",a3);
	if(a4==0) printf("N ");
	else printf("%.1f ",1.0*aa4/a4);
	if(a5==0) printf("N");
	else printf("%d",a5);
	return 0;
} 
