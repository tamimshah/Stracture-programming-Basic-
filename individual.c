#include<stdio.h>
int main()//Md.Tahmid Shah Tamim
{           
 char str[50];
 int i=0;
 printf("Enter the string: ");
 gets(str);

 while(str[i]!='\0')
 {
     printf(" %c ",str[i]);
     i++;
 }

 return 0;
}
