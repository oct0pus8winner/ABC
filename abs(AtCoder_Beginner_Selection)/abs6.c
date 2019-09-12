#include<stdio.h>

int main(void)
{
	int a,b;
	int card[100]={0};
	int N;
	int i,j;
	int k;
	int count;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&card[i]);
	}
	
	for(i=1;i<N;i++){
	  for(j=i-1;j>=0;j--){
		  if(card[j]>card[j+1]){
			  /*交換*/
			  k=card[j];
			  card[j]=card[j+1];
			  card[j+1]=k;
		    }
		  else break;
	    }
	}
	
	count=1;
	a=0;b=0;
	for(i=N-1;i>=0;i--){
		if(count%2==1){
			a+=card[i];
		}else{
			b+=card[i];
		}
		count++;
	}
	printf("%d",a-b);
}