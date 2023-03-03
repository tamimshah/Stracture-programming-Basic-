#include<stdio.h>
int main()//MD.TAHMID SHAH TAMIM
{            
	int a[2][2] = {{10, 20}, {30, 70}};
	int row,col;
	printf("Print 2D Array Bellow:\n");
 	for(row=0;row< 2;row++)
  	{
  		for(int col=0;col<2;col++)
  		{
  			printf("%d  ", a[row][col]);
		}
   		printf("\n");
  	}
}
