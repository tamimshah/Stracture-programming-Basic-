#include <stdio.h>
int main() {  
  char s1[100]="hello ",s2[]="world";
  int len,j;

  len=0;
  while (s1[len] != '\0') {
    ++len;
  }
  for (j=0;s2[j] !='\0';++j, ++len) {
    s1[len] = s2[j];
  }
  s1[len]='\0';

  printf("concatenation: ");
  puts(s1);

  return 0;
}
