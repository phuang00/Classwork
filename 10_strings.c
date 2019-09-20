#include <stdio.h>
#include <string.h>

int main(){
  // Do Now:
  char *s = "hello";
  char s1[10] = "hello";
  printf("s points to: %p\n", s);
  printf("s1 points to: %p\n", s1);
  printf("address of \"hello\": %p\n", &"hello");

  // Assignment:

  // strcpy: copy string to destination
  char ary[20];
  printf("\"%s\" is now copied to address %p\n", ary, strcpy(ary, "apple"));

  // strcat: concatenate strings
  printf("The address %p now stores \"%s\"\n", strcat(ary, " banana"), ary);

  // strcmp: compare strings
  char arr[10] = "orange";
  printf("\"%s\" compared with \"%s\": %d\n", ary, arr, strcmp(ary, arr));

  // strchr: first occurence of char in string
  char c = 'p';
  printf("the first occurence of \'%c\' in \"%s\" is at: %p \n", c, ary, strchr(ary, c));

}
