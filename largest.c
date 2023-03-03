#include<stdio.h>
main()
//MD.TAHMID SHAH TAMIM
 
{
int a,b,c,result;
printf("Enter Three Numbers:\n");
scanf("%d%d%d",&a,&b,&c);
result=(a>b)&&(a>c)? a:(b>c)?b:c;
printf("The Largest Number is: %d",result);
 
return 0;
}
