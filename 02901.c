#include <stdio.h>
void main()
{
    int values[4];
    printf("Enter 4 integers:");
         for(int i=0;i<4;i++)
            {
         scanf("%d",&values[i]);
         }
         printf("Displaying intrgers:");
         for (int i=0;i<4;i++)
         {
            printf("%d\n",values[i]);
         }
}
