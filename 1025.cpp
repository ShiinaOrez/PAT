#include<cstdio>
using namespace std;
struct add{
	int address;
	int w;
	int next;
}a[100005],b[100005];
int s[100005];
int start,n,k;
void swap(int x,int y){
	int s=b[x].w;
	b[x].w=b[y].w;
	b[y].w=s;
	return ;
}
void mk_array(int i){
	for(int j=0;j<k;j++)
		s[j+1]=b[k*(i+1)-j].address;
	s[k+1]=b[k*(i+1)].next;
}
void reset(){
	int limit=n/k;
	for(int i=0;i<limit;i++)
		for(int j=1;j<=k/2;j++)
			swap(k*i+j,k*(i+1)-j);
	return ;
}
int main(){
	scanf("%d %d %d",&start,&n,&k);
	for(int i=1;i<=n;i++){
		int tt;
		scanf("%d %d %d",&tt,&a[tt].w,&a[tt].next);
		a[tt].address=tt;
	}
	for(int tt=1;tt<=n;tt++){
		b[tt].address=a[start].address;
		b[tt].next=a[start].next;
		b[tt].w=a[start].w;
		tt++;
		start=a[start].next;
	}
	reset();
	int p=1;
	for(int i=0;i<n/k;i++){
		mk_array(i);
		for(int j=1;j<=k;j++){
			printf("%d %d %d\n",s[j],b[p].w,s[j+1]);
			p++;
		}
	}
	for(int i=(n/k)*k+1;i<=n;i++){
		printf("%d %d %d\n",b[i].address,b[i].w,b[i].next);
	}
	return 0;
} 
