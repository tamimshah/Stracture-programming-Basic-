#include<stdio.h>
void fibonacciSeries(int n)
{
   int a=0,b=1,c;
   for(int i=0;i<n; i++)
   {
     printf("%d ",a);
     c=a+b;
     a=b;
     b=c;
   } //MD.TAHMID SHAH TAMIM
}       //222-35-1141
int main()
{
   int term;
   printf("Enter the term: ");
   scanf("%d",&term);
   printf("The fibonacci series is: ");
   fibonacciSeries(term);
   return 0;
}
