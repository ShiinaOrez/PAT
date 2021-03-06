#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	unsigned long long int number;
	int de;
	int cai;
	int tot;
	int ss;
}stu[100005];
long long int n;
int l,h;
void add(long long int p){
	stu[p].ss=5;
	if(stu[p].de<l||stu[p].cai<l)
		return ;
	if(stu[p].de>=h&&stu[p].cai>=h){
		stu[p].ss=1;
		return ;
	}
	if(stu[p].de>=h&&stu[p].cai<h){
		stu[p].ss=2;
		return ;
	}
	if(stu[p].de<h&&stu[p].cai<stu[p].de){
		stu[p].ss=3;
		return ;
	}
    stu[p].ss=4;
	return ;
}
bool comp(node p1,node p2){
	if(p1.ss!=p2.ss)
		return p1.ss<p2.ss;
	if(p1.tot!=p2.tot)
		return p1.tot>p2.tot;
	if(p1.de!=p2.de)
		return p1.de>p2.de;
	else return p1.number<p2.number;
} 
int main(){
	scanf("%lld %d %d",&n,&l,&h);
	for(long long int i=1;i<=n;i++){
		scanf("%llu %d %d",&stu[i].number,&stu[i].de,&stu[i].cai);
		stu[i].tot=stu[i].de+stu[i].cai;
		add(i);
	}
	sort(stu+1,stu+n+1,comp);
	long long int m=1;
	while(stu[m].ss!=5)
		m++;
	m--;
	printf("%lld\n",m);
	for(long long int i=1;i<=m;i++)
		printf("%llu %d %d\n",stu[i].number,stu[i].de,stu[i].cai);
	return 0;
}
