#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	double count;
	double price;
	double profit;
}mo_p[1005];
int n;
double d;
bool comp(node &p1,node &p2){
	if(p1.profit>p2.profit) return true;
	else return false;
} 
int main(){
	scanf("%d %lf",&n,&d);
	for(int i=1;i<=n;i++)
		scanf("%lf",&mo_p[i].count);
	for(int i=1;i<=n;i++){
		scanf("%lf",&mo_p[i].price);
		mo_p[i].profit=1.00000*mo_p[i].price/mo_p[i].count;
	}
	sort(mo_p+1,mo_p+1+n,comp);
	int tt=1;
	double ans=0.00;
/*	while(d>0){
		if(d>mo_p[tt].count){
			ans+=mo_p[tt].price;
			d-=mo_p[tt].count;
			tt++;
			continue;
		}
		else{
			ans=ans+d*mo_p[tt].profit;
			break;
		}		
	}*/
	for(int i=1;i<=n;i++){
		if(mo_p[i].count<=d){
			d-=mo_p[i].count;
			ans+=mo_p[i].price;
		}
		else{
			ans+=d*mo_p[i].profit;
			break;
		}
	}
	printf("%.2f",ans);
	return 0;
} 
