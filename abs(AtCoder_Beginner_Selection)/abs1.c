#include<stdio.h>

int main(void)
{
	int a,b;/*a,bを宣言*/
	
	scanf("%d",&a);/*aに値を代入*/
	scanf("%d",&b);/*bに値を代入*/
	if((a%2)==1 && (b%2)==1){/*奇数同士の積かどうかを判定*/
		printf("Odd");/*奇数と表示*/
	}else{
		printf("Even");/*偶数と表示*/
	}
}