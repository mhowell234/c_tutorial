#include <stdio.h>


int main(void) {

  int i = 1;
  int *pi = &i;
  int **ppi = &pi;

  printf("i = %d, &i = %p\n", i, &i);
  printf("pi = %p, &pi = %p\n", pi, &pi);
  printf("ppi = %p, &ppi = %p\n", ppi, &ppi);
  printf("i = %d, pi = %p\n", *pi, *ppi);


  return 0;
}

