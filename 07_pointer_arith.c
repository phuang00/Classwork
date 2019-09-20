#include <stdio.h>

int main(){
  // i.
  unsigned int i = 261;
  int *p = &i;
  char *c = &i;

  // ii.
  printf("\np: %p \np points to: %d\n", p, *p);
  printf("\nc: %p \nc points to: %d\n\n", c, *c);

  // iii.
  printf("i in decimal: %u\n", i);
  printf("i in hex: %x\n\n", i);

  // iv.
  int x;
  for (x = 0; x < sizeof(i); x++){
    printf("byte of i: %hhu\n", *c);
    c++;
  }

  // v.
  c = &i;
  for (x = 0; x < sizeof(i); x++){
    *c = *c + 1; // as bytes increase by one, the number increases by 1 * (powers of 256)
    printf("i in decimal: %u\n", i);
    printf("i in hex: %x \n\n", i);
    c++;
  }
  c = &i;
  for (x = 0; x < sizeof(i); x++){
    printf("byte of i: %hhu\n", *c);
    c++;
  }
  printf("\n");

  // vi.
  c = &i;
  for (x = 0; x < sizeof(i); x++){
    *c = *c + 16; // as bytes increase by 16, the number increases by 16 * (powers of 256)
    printf("i in decimal: %u\n", i);
    printf("i in hex: %x \n\n", i);
    c++;
  }
  c = &i;
  for (x = 0; x < sizeof(i); x++){
    printf("byte of i: %hhu\n", *c);
    c++;
  }
}
