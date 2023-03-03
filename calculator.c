#include<stdio.h>
main()  //MD.TAHMID SHAH TAMIM
        //ID.222-35-1141
{
    char ch;
    float a,b;
    printf("Enter a symbol:\n");
    scanf("%c",&ch);
    printf("Enter Two Number:\n");
    scanf("%f%f",&a,&b);

    switch(ch)
    {
        case '+':
            printf("Addition Result is %.f",a+b);
            break;

        case '-':
            printf("Subtraction Result is %.f",a-b);
            break;

         case '*':
            printf(" Multi Result is %.f",a*b);
            break;

        case '/':
            printf("Division Result is %.f",a/b);
            break;
    }
}
