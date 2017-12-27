#include<cstdio>
#include<cstring>
using namespace std;
char A[105],B[105],ans[105];
char j(char a,char b){
	int p=a-48,q=b-48;
	int r=(p+q)%13;
	if(r==10) return 'J';
	if(r==11) return 'Q';
	if(r==12) return 'K';
	return char(r+48);
}
char o(char a,char b){
	int p=a-48,q=b-48;
	int r=q-p;
	if(r<0) r+=10;
	return char(r+48);
}
int main(){
	scanf("%s %s",A,B);
	int minl=0,lena=strlen(A),lenb=strlen(B);
	if(lena<lenb) minl=lena;
	else minl=lenb; 
	if(lenb>=lena)
		for(int i=1;i<=minl;i++){
			if(i%2==1) ans[i]=j(A[lena-i],B[lenb-i]);
			else ans[i]=o(A[lena-i],B[lenb-i]);
		}
	else 
		for(int i=1;i<=lena;i++){
			if(i>lenb){
				if(i%2==1) ans[i]=j(A[lena-i],'0');
				else ans[i]=o(A[lena-i],'0');
			} 
			else{
				if(i%2==1) ans[i]=j(A[lena-i],B[lenb-i]);
				else ans[i]=o(A[lena-i],B[lenb-i]);
			}	
		}	
	if(lena>=lenb){ 
		for(int i=lena;i>=1;i--)
			printf("%c",ans[i]);
	}
	else{
		for(int i=0;i<lenb-lena;i++)
			printf("%c",B[i]);
		for(int i=minl;i>=1;i--)
			printf("%c",ans[i]);
	}
	return 0;
}
