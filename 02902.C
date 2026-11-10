//write a c program to find the sum of all the elements of an array
#include <stdio.h>
int main()
{
    int s[6],sum=0;
    printf("Enter 6 integers:");
         for(int i=0;i<6;i++){
         scanf("%d",&s[i]);
         }

         for(int i=0;i<6;i++)
         {
        sum=sum+s[i];
         }
            printf("%d",sum);


}
