#include<stdio.h>

int main(void)
{
	int a,s1,s2,s3,sum;/*a,s1,s2,s3,sumを宣言*/
	
	scanf("%d",&a);/*aに値を代入*/
	s1=(a%10);/*1の位を判別*/
	a = a / 10;
	s2=(a%10);/*10の位を判別*/
	a = a / 10;
	s3=(a%10);/*100の位を判別*/
	sum=s1+s2+s3;/*各位の和を計算*/
	
	printf("%d",sum);
	
	return 0;
}