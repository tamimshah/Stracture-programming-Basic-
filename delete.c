#include<stdio.h>
main()//MD.TAHMID SHAH TAMIM
{       
    int arr[6]={11,24,31,40,5};
    int i,posi;
    printf("Enter The Delete Position: ");
    scanf("%d",&posi);
    for(i=posi-1;i<=5-1;i++)
    {
        arr[i]=arr[i+1];
    }
        for(i=0;i<5-1;i++)
        {
            printf("%d ",arr[i]);
        }
}
