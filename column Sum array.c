#include<stdio.h>
main()//MD.TAHMID SHAH TAMIM
{       
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum=0;
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d Column Sum: %d\n",j+1,sum);
        sum=0;
    }
    printf("\n");
}
