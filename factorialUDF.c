#include<stdio.h>
int fact(int a)
{
    int result=1;
    for(int i=1;i<=a;i++)
    {
        result=result*i;
    }
    return result;
}//MD.TAHMID SHAH TAMIM
int main() 
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    int result=fact(num);
    printf("Factorial: %d\n",result);
}
