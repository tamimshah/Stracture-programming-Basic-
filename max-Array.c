#include<stdio.h>
main() //MD.TAHMID SHAH TAMIM
{      //ID.222-35-1141
    int arr[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
        if(arr[0]<arr[i])
        arr[0]=arr[i];
    }
    printf("The Maximum Value is: %d",arr[0]);
}
