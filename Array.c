#include<stdio.h>
main() //MD.TAHMID SHAH TAMIM
{      //ID.222-35-1141
    int arr[5], i;
    printf("Enter any 5 elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Odd elements are: ");
    for(i=0; i<5; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ", arr[i]);
        }
    }
}
