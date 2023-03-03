#include<stdio.h>
main()
{
    int t,up=0,lo=0;
    scanf("%d",&t);
    while(t--) {
        int a,i;
        scanf("%d",&a);
        int arr[a];
        for(i=0;i<a;i++)
        {
          scanf("%d",&arr[i]);
        }
            for(int j=1;j<i;j++) {
                if(arr[up]<arr[j]) {
                   up=j;
        }
    }
    for(int j=1; j<i; j++) {
        if(arr[lo]>arr[j]) {
            lo=j;
        }
    }
     printf("%d %d\n", lo+1,up+1);
     up=0,lo=0;
    }
}
