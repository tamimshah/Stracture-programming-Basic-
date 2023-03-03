#include<stdio.h>
main()
{
    int n,FirstNumber,SecondNumber,Ans;
    char option;
    do{
    printf("What Operation You Like to do?\n");
    printf("press 1 for Addition\n");
    printf("press 2 for Subtraction\n");
    printf("press 3 for Multiplication\n");
    printf("press 4 for Division\n");
    scanf("%d",&n);
    printf("Enter The First Number:\n");
    scanf("%d",&FirstNumber);
    printf("Enter The Second Number:\n");
    scanf("%d",&SecondNumber);
    switch(n)
    {
    case 1:
        Ans=FirstNumber+SecondNumber;
        printf("The Addition is %d",Ans);
        break;
    case 2:
        Ans=FirstNumber-SecondNumber;
        printf("The Subtraction is %d",Ans);
        break;
    case 3:
        Ans=FirstNumber*SecondNumber;
        printf("The Multiplication is %d",Ans);
        break;
    case 4:
        Ans=FirstNumber/SecondNumber;
        printf("The Division is %d",Ans);
        break;
    default:
        printf("Wrong Input\n");
    }
    printf("Do You Want To Continue y/n? \n");
    option=getch();

    } while(option=='y');
}
