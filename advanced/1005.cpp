#include<cstdio>
#include<cstring>
using namespace std;
int count;
void print(int x){
	switch (x){
		case (0):{
			printf("zero");
			break;
		}
		case (1):{
			printf("one");
			break;
		}
		case (2):{
			printf("two");
			break;
		}
		case (3):{
			printf("three");
			break;
		}
		case (4):{
			printf("four");
			break;
		}
		case (5):{
			printf("five");
			break;
		}
		case (6):{
			printf("six");
			break;
		}
		case (7):{
			printf("seven");
			break;
		}
		case (8):{
			printf("eight");
			break;
		}
		case (9):{
			printf("nine");
			break;
		}
		default :{
			printf(" ");
			break;
		}
	}
	return ;
}
int main(){
	char a;
	char s[105];
	int b;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		a=s[i];
		b=a-'0';
		count+=b;
	}
	if(!count){
		printf("zero");
		return 0;
	}
	b=1000;
	while(count/b==0) b/=10;
	while(b!=0){
		print(count/b);
		count%=b;
		if(b>1) print(11);
		b/=10;
	}
	return 0;
}
