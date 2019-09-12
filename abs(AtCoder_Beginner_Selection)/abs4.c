#include<stdio.h>

/*500 A 100 B 50 C をX円にする方法は何通り*/
/*入力　A　B　C　Xの順*/

int main(void)
{
	int A,B,C,X;/*500円=A枚 100円=B枚 50円=C枚 X円*/
	int i,j,k;/*カウンタ変数*/
	int a[3]={0};
	int x[3]={0};
	int n;
	scanf("%d%d%d%d",&A,&B,&C,&X );
	
	n=0;
	
	for(i=0;i<=A;i++){
		x[0]=X-500*i;
		if(x[0]>=0){
			for(j=0;j<=B;j++){
				x[1]=x[0]-100*j;
				if(x[1]>=0){
					for(k=0;k<=C;k++){
						x[2]=x[1]-50*k;
						if(x[2]==0){
							n++;
						}
					}
				}
			}
		}	
	}
	printf("%d",n);
}