#include<stdio.h>
#include<string.h>
int main()//Md.Tahmid Shah Tamim
{       //222-35-1141
        char str[20];
        int i;
        printf("Enter any string: ");
        gets(str);


        for(i=0;i<=strlen(str);i++)
    {
                if(str[i]>=97&&str[i]<=122)
                        str[i]=str[i]-32;
                else if(str[i]>=65&&str[i]<=90)
                        str[i]=str[i]+32;
        }
        printf("The Converted String is: %s\n",str);

        return 0;
}
