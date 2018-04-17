//Å£¿ÍÍøAC 
#include<cstdio>
#include<cstring>
using namespace std;
const int c='A'-'a';
char error[50],w[100005];
bool type[130];
int main(){
	scanf("%s",error);
	int len=strlen(error);
	for(int i=0;i<len;i++){
		if(error[i]=='+'){
			for(int j='A';j<='Z';j++)
				type[j]=true;
			continue;
		}
		if(error[i]<='Z'&&error[i]>='A'){
			type[error[i]]=true;
			type[error[i]-c]=true;
			continue;
		}
		type[error[i]]=true;
	} 
	scanf("%s",w);
	len=strlen(w);
	for(int i=0;i<len;i++){
		if(type[w[i]]) continue;
		printf("%c",w[i]);
	} 
	return 0;
} 
