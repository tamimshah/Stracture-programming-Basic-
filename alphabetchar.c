#include <stdio.h>
int main()
{       //MD.TAHMID SHAH TAMIM
       
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            printf("This is alphabet");
        }
    else
        {
            printf("This is not alphabet");
        }

    return 0;
}
