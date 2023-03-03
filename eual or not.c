#include<stdio.h>
int main() //Md.Tahmid Shah Tamim
{          //222-35-1141
    int num,n,rn=0;
    printf("Enter 5 digit number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rn=rn*10;
        rn=num%10+rn;
        num=num/10;
    }
    printf("Reversed Number of %d is %d\n",n,rn);
    if(n==rn)
        printf("Input Number %d & Reversed Number %d are equal",n,rn);
    else
        printf("Input Number %d & Reversed Number %d are not equal",n,rn);

   return 0;
}
