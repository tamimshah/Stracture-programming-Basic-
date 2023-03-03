 #include<stdio.h>
 main()//MD.TAHMID SHAH TAMIM
 {      //222-35-1141
     int arr[6]={10,11,20,40,50};
     int i,pos,n=6,data;
     printf("Enter The Element: ");
     scanf("%d",&data);
     printf("Enter Data Position: ");
     scanf("%d",&pos);
     for(i=5;i>=pos;i--)
     {
         arr[i]=arr[i-1];
     }
     arr[pos-1]=data;
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     return 0;
 }
