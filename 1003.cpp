#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int n;
int main(){
	char a[105];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		memset(a,0,sizeof(a[1]));
		scanf("%s",a);
		bool k=1,p=0,t=0;
		int len=strlen(a),num=0;
		for(int j=0;j<len;j++){
			if(a[j]!='A'&&a[j]!='P'&&a[j]!='T'){
				k=0;
				break;
			}
			if(a[j]=='A'&&p==0) continue;
			if(a[j]=='P'&&p==0){
				p=1;continue;
			}
			if(a[j]=='P'&&p==1){
				k=0;break;
			}
			if(a[j]=='A'&&p==1&&t==0){
				num++;
				if(num>2){
					k=0;
					break;
				}
				continue;
			}
			if(a[j]=='T'&&t==0){
				t=1;continue;
			}
			if(a[j]=='T'&&t==1){
				k=0;break;
			}
			if(a[j]=='A'&&t==1) continue;
		} 
		if(k&&num>=1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
