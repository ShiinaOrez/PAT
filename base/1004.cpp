#include<cstdio>
using namespace std;
struct node{
	char name[15];
	char sch[15];
	int grade;
}student[1005];
int n;
int main(){
	int max=0,min=101,x,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %s %d",student[i].name,student[i].sch,&student[i].grade);
		if(student[i].grade>max){
			x=i;
			max=student[i].grade;
		} 
		if(student[i].grade<min){
		    y=i;
		    min=student[i].grade;
		}
	} 
	printf("%s %s\n%s %s",student[x].name,student[x].sch,student[y].name,student[y].sch);
	return 0;
}
