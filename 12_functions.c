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
