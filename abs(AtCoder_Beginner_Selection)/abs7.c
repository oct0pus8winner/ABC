#include<stdio.h>

int main(void)
{
	int N;
	int disc[100]={0};
	int step[100]={0};
	int i,j;
	int k;
	int x=0;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&disc[i]);
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<100;j++){
			if(j+1==disc[i])step[j]=1;
		}
	}
	
	for(i=0;i<100;i++){
		x+=step[i];
	}
	printf("%d",x);
}