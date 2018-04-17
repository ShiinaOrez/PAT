#include<cstdio>
#include<algorithm>
#include<iostream>
#define maxn 5
using namespace std;
int a[maxn],pre1[maxn],pre2[maxn],n;
void f(int aa){
	a[1]=aa/1000;aa%=1000;
	a[2]=aa/100;aa%=100;
	a[3]=aa/10;aa%=10;
	a[4]=aa;
	return ;
}
int c(int x[]){
	return 	1000*x[1]+100*x[2]+10*x[3]+x[4];
}
void cal(){
	int p1,p2,aa;
	p1=c(pre1);
	p2=c(pre2);
	aa=p1-p2;
	f(aa);
	return ; 
}
bool comp2(const int p1,const int p2){
	if(p1<p2) return 1;
	else return 0;
}
bool comp1(const int p1,const int p2){
	if(p2<p1) return 2;
	else return 0;
}
int main(){
	scanf("%d",&n);
	f(n);
	if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]){
		for(int i=1;i<=4;i++) printf("%d",a[1]);
		printf(" - ");
		for(int i=1;i<=4;i++) printf("%d",a[1]);
		printf(" = 0000");
		return 0;
	}
	do{
		for(int i=1;i<=4;i++){
			pre1[i]=a[i];
			pre2[i]=a[i];
		}
		sort(pre1+1,pre1+5,comp1);
		sort(pre2+1,pre2+5,comp2);
		cal();
		for(int i=1;i<=4;i++) printf("%d",pre1[i]);
		printf(" - ");
		for(int i=1;i<=4;i++) printf("%d",pre2[i]);
		printf(" = ");
		for(int i=1;i<=4;i++) printf("%d",a[i]);
		printf("\n");
	}while(c(a)!=6174);
	return 0;
}
