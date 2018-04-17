#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
struct node{
	char name[5];
}week[8];
char a[62],b[62],c[62],d[62];
int main(){
	scanf("%s %s %s %s",a,b,c,d);
	strcpy(week[1].name,"MON");
	strcpy(week[2].name,"TUE");
	strcpy(week[3].name,"WEN");
	strcpy(week[4].name,"THU");
	strcpy(week[5].name,"FRI");
	strcpy(week[6].name,"SAT");
	strcpy(week[7].name,"SUN");
	int len_a=strlen(a);
	int len_b=strlen(b);
	int len_c=strlen(c);
	int len_d=strlen(d);
	int num=0,day,clo,m;
	for(int i=0;i<min(len_a,len_b);i++){
		if(a[i]==b[i]&&((a[i]>=65&&a[i]<=90)||(a[i]>=48&&a[i]<=58))){
			if(num==0&&a[i]>=65&&a[i]<=90){
				day=a[i]%64;
				num++;
				continue;
			}
			if(num==1){
				if(a[i]>=48&&a[i]<=58) clo=a[i]-48;
				else clo=a[i]-=55;
				break;
			} 
		}
	} 
	for(int i=0;i<min(len_c,len_d);i++){
		if(c[i]==d[i]&&((a[i]>=65&&a[i]<=90)||(a[i]>=92&&a[i]<=122))){
			m=i;
			break;
		}
	} 
	printf("%s %d:",week[day].name,clo);
	if(m<10) printf("0");
	printf("%d",m);
	return 0;
}
