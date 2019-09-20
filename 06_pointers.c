#include <stdio.h>
#include <stdlib.h>




int main(){

  // 1.
  int i = 228;
  char c = 'a';
  long l = 1128;

  // 2.
  printf("\nthe int %d has an address of: %p and %lu", i, &i, &i);
  printf("\nthe char %c has an address of : %p and %lu", c, &c, &c);
  printf("\nthe int %ld has an address of : %p and %lu\n\n",l, &l, &l);

  // 3.
  int *x = &i;
  char *y = &c;
  long *z = &l;

  // 4.
  printf("pointer of i: %p \npointer of c: %p \npointer of l: %p \n\n", x, y, z);

  // 5.
  *x = *x + 11;
  *y = *y - 28;
  *z = *z + 2000;
  printf("value of i: %d \nvalue of c: %c \nvalue of l: %ld\n\n", i, c, l);

  // 6.
  char *car;

  // 7.
  car = &i;
  printf("pointer value: %p\n\n", car);

  // 8.
  *car = *car + 2;

  // 9.
  printf("value of original int: %d\n\n", i);

}
