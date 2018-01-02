#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int full=0;
int stu[1005];
int answer[105][30];
struct node{
	int grade;
	int wrong;
	int c;
}t[106];
int n,m;
bool comp(node p1,node p2){
	if(p1.wrong!=p2.wrong)
		return p1.wrong>p2.wrong?true:false;
	return p1.c<p2.c?true:false;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=m;i++){
		int k;
		scanf("%d %d %d",&t[i].grade,&answer[i][0],&k);
		for(int j=1;j<=k;j++){
			char a;
			scanf(" %c",&a);/* printf("%c",a); */
			answer[i][a-'a'+1]=1;
		}
		answer[i][0]=k;
	}
	getchar();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int k,count=0;
			bool y=1;
			scanf("(%d",&k);
			for(int p=1;p<=k;p++){
				char a;
				scanf(" %c",&a);/*printf("%c",a);*/
				if(answer[j][a-'a'+1]!=1)
					y=false;
				else count++;
			}
			scanf(")");getchar();
			if(count<answer[j][0]) y=false;
			if(y) stu[i]+=t[j].grade;
			else t[j].wrong++; 
		}
	}
	for(int i=1;i<=m;i++) t[i].c=i;
	for(int i=1;i<=n;i++) full+=t[i].grade;
	sort(t+1,t+101,comp);
	bool p=true;
	for(int i=1;i<=n;i++){
		printf("%d\n",stu[i]);
		if(stu[i]<full) p=0;	
	}
	int maxi=t[1].wrong,q=1;
	printf("%d ",t[1].wrong);
	while(t[q].wrong==maxi){
		printf("%d",t[q].c);
		if(t[q+1].wrong==maxi) printf(" ");
		q++;
	}
	if(p) printf("\nToo simple");
	return 0;
		
}
