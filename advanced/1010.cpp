#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
unsigned long long int N1,N2;
int R;
unsigned long long int func_to_10 (string x,int r){//r->10
	unsigned long long int count=0;
	unsigned long long int re=1;
	for(int i=x.length()-1;i>=0;i--){
		int xx;
		if(x[i]<='9'&&x[i]>='0') xx=x[i]-'0';
		else xx=x[i]-'a'+10;
		printf("1");
		count+=(xx*re);
		re*=r;
	}
	return count;
}
void err(){
	printf("Impossible\n");
	return ;
}
int get_r(string s){
	int r=0,xx;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]<='9'&&s[i]>='0') xx=s[i]-'0';
		else{
			xx=s[i]-'a'+10;
		} 
		if(xx+1>r) r=xx+1;
	}
	return r;
}
int main(){
	string s1,s2;
	int tag,r;
	scanf("%s %s %d %d",&s1,&s2,&tag,&r);
	if(tag==2){
		string swap;
		swap=s1;s1=s2;s2=swap;
	}
	printf("1"); 
	N1=func_to_10(s1,r);
	printf("1");
	R=get_r(s2);
	printf("1");
	if(func_to_10(s2,R)>N1){
		err();
	}
//	printf("1");
	else{
		while(1){
			R++; 
			printf("1");
			N2=func_to_10(s2,R);
			if(N2<N1&&N2!=N1){
				err();
				break;
			}
			if(N2==N1){
				printf("%d\n",R);
				break;
			}
		}
	}
	return 0;
}
