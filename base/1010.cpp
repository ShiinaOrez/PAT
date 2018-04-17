#include<cstdio>
using namespace std;
struct node{
	int x;
	int y;
}num[1000];
int main(){
	int t=1;
	num[0].y=1;
	while(num[t-1].y!=0){
		scanf("%d %d",&num[t].x,&num[t].y);
		t++;
	}
	if(num[1].y==0){
		printf("0 0");
		return 0;
	}
	for(int i=1;i<t;i++){
		if(num[i].y==0) continue;
		printf("%d %d",num[i].x*num[i].y,num[i].y-1);
		if(num[i+1].y!=0) printf(" ");
	}
	return 0;
}
