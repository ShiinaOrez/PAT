#include<iostream> 
#include<cstdio>
#include<cstring>
using namespace std;
int a[100],count=0;
int main(){
	char s[100];
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		s[i]-=48;
		count+=s[i];
	}
	int t=0; 
	while(count!=0){
		t++;
		a[t]=count%10;
		count/=10;
	}
	for(;t>=1;t--){
		switch(a[t]){
			case(0):{
				printf("ling");
				break;
			} 
			case(1):{
				printf("yi");
				break;
			}
			case(2):{
				printf("er");
				break;
			}
			case(3):{
				printf("san");
				break;
			}
			case(4):{
				printf("si");
				break;
			}
			case(5):{
				printf("wu");
				break;
			}
			case(6):{
				printf("liu");
				break;
			} 
			case(7):{
				printf("qi");
				break;
			}
			case(8):{
				printf("ba");
				break;
			}
			case(9):{
				printf("jiu");
				break;
			}
		}
		if(t!=1) printf(" ");
	}
	return 0;
}
