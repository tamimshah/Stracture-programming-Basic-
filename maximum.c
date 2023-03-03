#include <stdio.h>
int main()
{           //MD.TAHMID SHAH TAMIM
             
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    if(num1 > num2)
    {
        printf("The Maximum Number is %d",num1);
    }
    else
    {
        printf("The Maximum Number is %d",num2);
    }

    return 0;
}
