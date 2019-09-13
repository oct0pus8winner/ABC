#include <stdio.h>
#include <stdlib.h>
/*ABC132 C*/

int main(void)
{
  int N;
  int pattern = 0;
  int count   = 0;
  int *array;
  int temp = 0;

  scanf("%d", &N);
  count = N/2;
  array = (int *)malloc(sizeof(int) * N);
  if (array == NULL) {
    exit(0);
  }

  for (size_t i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }

  for (size_t i = 0; i < N; i++) {
    for (size_t j = i-1; j >= 0; j--) {
      if (array[j] > array[j+1]) {
        temp       = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }else break;
    }
  }

  pattern = array[count] - array[count - 1];

  printf("%d\n", pattern);
  free(array);
  return 0;
}
