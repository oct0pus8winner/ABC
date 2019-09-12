#include<stdio.h>/*AtCorder Beginer 03*/
#include<math.h>

int two(int);

int main(void)
{
	int N;/*入力する数値の数*/
	int a;
	int min=1000000;
	scanf("%d",&N);

	
	for(int i=0;i<N;i++){/*aに値を格納,twoで２で割れる回数を表示*/
		scanf("%d",&a);
		
		if (min>=two(a))
			min=two(a);
	}
	printf("%d",min);
	return 0;
}

int two(int a)/*aを２で割れる回数*/
{
	int counter=0;
	while(a%2==0){
		a/=2;
		counter++;
	}
	return counter;
}