#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	long long int number[10];
	int de;
	int cai;
	int tot;
	int ss;
}stu[10005];
int n,l,h;
void add(int p){
	stu[p].ss=5;
	if(stu[p].de<l||stu[p].cai<l)
		return ;
	if(stu[p].de>=h&&stu[p].cai>=h)
		stu[p].ss=1;
	if(stu[p].de>=h&&&&stu[p]<h)
		stu[p].ss=2;
	if(stu[p].de<h&&stu.cai<stu[p].de)
		stu[p].ss=3;
	else stu[p].ss=4;
	return ;
}
bool comp(const node &p1,const node &p2){
	if(p1.ss!=p2.ss)
		return p1.ss<p2.ss;
	if(p1.tot!=p2.tot)
		return p1.tot>p2.tot;
	if(p1.de!=p2.de)
		return p1.de>p2.de;
	else return p1.number<p2.number;
} 
int main(){
	scanf("%d %d %d",&n,&l,&h);
	for(int i=1;i<=n;i++){
		scanf("%lld %d %d",&stu[i].number,&stu[i].de,&stu[i].cai);
		stu[i].tot=stu[i].de+stu[i].cai;
		add(i);
	}
	sort(stu+1,stu+n+1,comp);
	int m=1;
	while(stu[p].ss!=5)
		m++;
	m--;
	pritnf("%d\n",m);
	for(int i=1;i<=m;i++)
		printf("%lld %d %d\n",stu[i].number,stu[i].de,stu[i].cai);
	return 0;
}
