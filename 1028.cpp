#include<cstdio>
#include<cstring>
using namespace std;
struct node{
	char s[10];
	int y;
	int m;
	int d;
}maxi,mini;
char name[10];
int y,m,d,tot=0,n;
//int month=[0,31,28,31,30,31,30,31,31,30,31,30,31];
bool check(){
	if(y<1814) return 0;
	if(y==1814){
		if(m<9) return 0;
		if(m==9){
			if(d<6) return 0;
		}
	}
	if(y>2014) return 0;
	if(y==2014){
		if(m>9) return 0;
		if(m==9){
			if(d>6) return 0;
		}
	}
	return 1;
}
void update(bool k,node x){
	strcpy(x.s,name);
	x.y=y;
	x.m=m;
	x.d=d;
	if(k) maxi=x;
	else mini=x;
	return ;
}
void comp_max(){
	if(y<maxi.y) update(1,maxi);
	if(y==maxi.y){
		if(m<maxi.m) update(1,maxi);
		if(m==maxi.m){
			if(d<maxi.d) update(1,maxi);
		}
	}
	return ;
}
void comp_min(){
	if(y>mini.y) update(0,mini);
	if(y==mini.y){
		if(m>mini.m) update(0,mini);
		if(m==mini.m){
			if(d>mini.d) update(0,mini);
		}
	}
	return ;
} 
int main(){
	maxi.y=2014;
	maxi.m=9;
	maxi.d=7;
	mini.y=1814;
	mini.m=9;
	mini.d=5;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %d/%d/%d",name,&y,&m,&d);
		if(check()){
			tot++;
			comp_max();
			comp_min();
		}
	}
	printf("%d %s %s",tot,maxi.s,mini.s);
	return 0;
} 
