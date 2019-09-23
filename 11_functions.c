#include <stdio.h>

int avg(int *arr, int len){
  int i;
  int sum = 0;
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
  for(i = 0; i < sizeof(str); i++){
    if (*(str + i) != '\0'){
      len++;
    }
  }
  return len;
}

int main(){
  int ary[] = {1,2,3,4,5,6,7};
  int arr[] = {9,8,4,7,3,6,7};
  printf("Average of ary: %d\n", avg(ary, sizeof(ary)/4));
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
  printf("%d\n", lenstr(s));
}
