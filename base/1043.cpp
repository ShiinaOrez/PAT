#include<cstdio>
#include<cstring> 
using namespace std;
char s[10005];
int num[200];
int main(){
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		num[s[i]]++;
	}
	while(num['P']!=0||num['A']!=0||num['T']!=0||num['e']!=0||num['s']!=0||num['t']!=0){
		if(num['P']!=0){
			printf("P");
			num['P']--;
		}
		if(num['A']!=0){
			printf("A");
			num['A']--;
		}
		if(num['T']!=0){
			printf("T");
			num['T']--;
		}
		if(num['e']!=0){
			printf("e");
			num['e']--;
		}
		if(num['s']!=0){
			printf("s");
			num['s']--;
		}
		if(num['t']!=0){
			printf("t");
			num['t']--;
		}
	}
	return 0;
} 
