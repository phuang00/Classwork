#include <stdio.h>

double avg(int *arr, int len){
  int i;
  double sum = 0;
  for (i = 0; i < len; i++){
    sum += *(arr + i);
  }
  return sum / len;
}

void copy(int *arr1, int *arr2, int len){
  int i;
  for (i = 0; i < len; i++){
    *(arr2 + i) = *(arr1 + i);
  }
}

int lenstr(char *str){
  int i = 0;
  int len = 0;
  while(*(str + i) != '\0'){
      len++;
      i++;
  }
  return len;
}

int main(){
  int ary[] = {1,2,3,4,5,6,7};
  int arr[] = {9,8,4,7,3,6,7};
  printf("Average of ary: %0.2lf\n", avg(ary, sizeof(ary)/4));
  copy(ary, arr, sizeof(ary)/4);
  printf("arr after ary is copied into it: ");
  int i;
  printf("[");
  for (i = 0; i < 7; i++){
    if (i != 0){
      printf(" ");
    }
    printf("%d", *(arr + i));
    if (i != 6){
      printf(",");
    }
  }
  printf("]\n");
  char *s = "FOUR";
  printf("length of %s: %d\n", s, lenstr(s));
}
