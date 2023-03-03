#include <stdio.h>
int main() //Md.Tahmid Shah Tamim
{            
    int num,sum = 0;
    printf("Enter 5 Digit: ");
    scanf("%d",&num);

    while(num>0)
    {
        sum =sum+num%10;
        num = num/10;
    }
    printf("The sum of digits %d",sum);
}
