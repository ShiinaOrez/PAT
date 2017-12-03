#include<cstdio>
using namespace std;
char s;
int n;
int print[1000];
int main(){
	scanf("%d %c",&n,&s);
	int tot=0,r=0;
	for(int i=1;;i+=2){
		tot+=i;
		r++;
		if(tot*2-1>n){
			tot-=i;
			r--;
			break;
		}
	}
	print[1]=1;
	for(int i=2;i<=r;i++) print[i]=print[i-1]+2;
	for(int i=r;i>=1;i--){
		for(int j=1;j<=r-i;j++) 
			printf(" ");
		for(int j=1;j<=print[i];j++)
			printf("%c",s);
		printf("\n");
	}
	for(int i=2;i<=r;i++){
		for(int j=1;j<=r-i;j++)
			printf(" ");
		for(int j=1;j<=print[i];j++)
			printf("%c",s);
		printf("\n");
	}
	printf("%d",n-(tot*2-1));
	return 0;
}
