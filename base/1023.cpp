#include<cstdio>
using namespace std;
int num[10];
int ans[55]; 
int main(){
	for(int i=0;i<10;i++) 
		scanf("%d",&num[i]);
	int k=1;
	while(num[k]==0)
		k++;
	printf("%d",k);
	num[k]--;
	for(int i=0;i<=9;i++){
		while(num[i]!=0){
			printf("%d",i);
			num[i]--;
		}
	}
	return 0; 
}
