#include<stdio.h>
main()
//MD.TAHMID SHAH TAMIM
 
{
    char ch;
    printf("Enter The Alphabet Value:");
    scanf("%c",&ch);
    (ch>='A' && ch<='Z') || (ch>='a' && ch<='z')? printf("Alphabet"): printf("Not Alphabet");
    return 0;
}
