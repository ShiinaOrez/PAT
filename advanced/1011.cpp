#include<cstdio>
#include<cmath>
using namespace std;
float min(float w,float t,float l){
	if(w>=t&&w>=l){
		printf("W ");
		return w;
	} 
	if(t>=w&&t>=l){
		printf("T ");
		return t;
	} 
	else{
		printf("L ");
		return l;
	} 
}
int main(){
	float w,t,l;
	float tot=1.0;
	for(int i=1;i<=3;i++){
		scanf("%f %f %f",&w,&t,&l);
		tot*=min(w,t,l);
	}
	tot*=0.65;
	tot-=1;
	tot*=2;
//	printf("%f %d ",tot,int(tot/0.001));
	if(int(round(tot/0.001))%10>=5) tot+=0.01;
	printf("%.2f",tot);
	return 0;
}
