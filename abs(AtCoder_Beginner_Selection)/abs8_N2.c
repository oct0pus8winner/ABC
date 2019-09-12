#include<stdio.h>

int main(void)
{
	int N,Y;/*N:お札の総枚数,Y:お年玉の総額*/
	int i, j, k;/*i = 10000円札の枚数, 5000円札の枚数, 1000円札の枚数 */

	scanf("%d%d", &N, &Y);

	for ( i = 0; i <= N; i++) {
		for ( j = 0; j <=  N - i; j++) {
			k = N - i - j;
			if ( Y == 10000 * i + 5000 * j + 1000 * k) {
				printf("%d %d %d\n", i, j, k);
				return 0;
			}
		}
	}

	printf("-1 -1 -1\n");
	return -1;
}
