#include<cstdio>
using namespace std;
int point=0,m,n,a[1010],b[1010];
void print(){
	for(int i=1;i<=point;i++){
		printf("%d",b[i]);
		if(i!=point&&i%10!=0) printf(" ");
		if(i%10==0) printf("\n");
	}
	return ;
}
void add(int x){
	 point++;
	 b[point]=x;
	 return;
}
bool func(int x){
	int h=2;
	while(h<(x/h+1)){
		if(x%h==0) return false;
		h++;
	}
	return true;
}
int main(){
	scanf("%d %d",&m,&n);
	int tot=1;
	for(int i=1;tot<=1002;i++){
		if(func(i)){
			a[tot]=i;
			tot++;
		}
	}
	for(int i=m+1;i<=n+1;i++)
		add(a[i]);
	print();
	return 0;
} 
