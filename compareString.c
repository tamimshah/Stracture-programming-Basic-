#include <stdio.h>
#include <string.h>
int main()//Md.Tahmid Shah Tamim
{      
  	char Str1[100], Str2[100];
  	int result,i;
  	printf("Enter the First String: ");
  	gets(Str1);
  	printf("Enter the Second String: ");
  	gets(Str2);
  	for(i=0;Str1[i]==Str2[i] && Str1[i]=='\0';i++);

  	if(Str1[i]<Str2[i])
   	{
   		printf("str1 is Less than str2");
	}
	else if(Str1[i]>Str2[i])
   	{
   		printf("str2 is Less than str1");
	}
	else
   	{
   		printf("str1 is Equal to str2");
	}
  	return 0;
}
