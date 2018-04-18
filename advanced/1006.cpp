#include<cstdio>
#include<cstring>
using namespace std;
int n;
int h1,m1,s1,h2,m2,s2;
char name[15],signin[15],signout[15];
int morning=24*3600+10,night=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",name);
		scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
		int count=3600*h1+60*m1+s1;
		if(count<morning){
			morning=count;
			strcpy(signin,name);
		}
		count=3600*h2+60*m2+s2;
		if(count>night){
			night=count;
			strcpy(signout,name);
		}
	} 
	printf("%s %s",signin,signout);
	return 0;
} 
