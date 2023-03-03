#include<stdio.h>
int main() //MD.TAHMID SHAH TAMIM
{            
    int n,i,fact=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d factorial is %d\n",n,fact);
}
