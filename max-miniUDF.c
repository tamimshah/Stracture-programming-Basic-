#include <stdio.h>
 int sumarray(int a[],int n)
 {
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];
		   if(max<a[i])
		    max=a[i];
    }
    printf("minimum array: %d\n",min);
    printf("maximum array: %d",max);
 }//MD.TAHMID SHAH TAMIM
int main()
{    
    int a[100],i,n,sum;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sumarray(a,n);
}
