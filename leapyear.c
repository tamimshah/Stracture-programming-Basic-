#include <stdio.h>
int main()
{           //MD.TAHMID SHAH TAMIM
            //ID.222-35-1141
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0)
    {
        printf("This is leap year\n");
    }

   else if (year % 100 == 0)
   {
      printf("This is not leap year");
   }

   else if (year % 4 == 0)
    {
      printf("This is leap year", year);
    }

   else
    {
      printf("This is not leap year");
    }
}
