#include<stdio.h>
/*1以上N以下の整数のうち、10進法での各桁の和がA以上B以下であるものの総和を求めてください。*/
/*入力　N,A,B*/
/*N<(10^4)*/
int main(void)
{
	int A,B,N;
	int i,j,k;
	int n[5]={0};
	int sum=0;
	int SUM=0;
	
	scanf("%d%d%d",&N,&A,&B);
	
	for(i=1;i<=N;i++){
		n[4]=i%10;
		n[3]=(i%100-n[4])/10;
		n[2]=(i%1000-n[4]-n[3])/100;
		n[1]=(i%10000-n[4]-n[3]-n[2])/1000;
		n[0]=(i%100000-n[4]-n[3]-n[2]-n[1])/10000;
		
		for(j=0;j<5;j++){
			sum+=n[j];
			n[j]=0;
		}
		if(A<=sum && sum<=B){
			SUM+=i;
		}
		sum=0;
	}
	printf("%d",SUM);
}