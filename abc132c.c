#include <stdio.h>
#include <stdlib.h>
/*ABC132 C*/

int main(void)
{
  int N;
  int pattern = 0;
  int count1  = 0;
  int count2  = 0;
  int *array;
  int max = 0;

  scanf("%d", &N);
  array = (int *)malloc(sizeof(int) * N);
  if (array == NULL) {
    exit(0);
  }

  for (size_t i = 0; i < N; i++) {
    scanf("%d", &array[i]);
    if (max < array[i]) max = array[i];
  }

  for (size_t i = 0; i <= max; i++) {
    for (size_t j = 0; j < N; j++) {
      if ( array[j] >= i) count1++;
      else count2++;
    }

    if (count1 == count2) pattern++;
    count1 = 0;
    count2 = 0;
  }

  printf("%d\n", pattern);
  free(array);
  return 0;
}
