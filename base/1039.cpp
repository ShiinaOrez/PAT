#include<cstdio>
#include<cstring>
using namespace std;
char s1[1005],s2[1005];
int c1[200],c2[200];
bool k=true;
void count(int len1,int len2){
	for(int i=0;i<len1;i++)
		c1[s1[i]]++;
	for(int i=0;i<len2;i++)
		c2[s2[i]]++;
	return ;
}
int check(int len1,int len2){
	int c=0;
	for(int i=1;i<=199;i++){
		if(c2[i]!=0){
			if(c1[i]<c2[i]){
				k=false;
				c+=(c2[i]-c1[i]);
			}
		}
	} 
	if(k==true) c=len1-len2;
	return c;
} 
int main(){
	scanf("%s %s",s1,s2);
	int len1=strlen(s1),len2=strlen(s2);
	count(len1,len2);
	int ans=check(len1,len2);
	if(k) printf("Yes ");
	else printf("No ");
	printf("%d",ans);
	return 0; 
}
