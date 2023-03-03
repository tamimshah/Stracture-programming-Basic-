#include<stdio.h>
main()
//MD.TAHMID SHAH TAMIM
//ID.222-35-1141
{
    char ch;
    printf("Enter The Alphabet Value:");
    scanf("%c",&ch);
    (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')? printf("Alphabet"): printf("Not Alphabet");
    return 0;
}
