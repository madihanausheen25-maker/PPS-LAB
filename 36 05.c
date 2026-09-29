#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    result= ~a;
    printf("NOT result=%d",result);
    return 0;
}

