#include<stdio.h>
int main ()
{
    int a,b;
    char choice;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    printf("\nEnter an opertor(+,-,*,/,%%)");
    scanf("%c",&choice);
    switch (choice)
    {
    case'+':
        printf("adiition=%d\n",a+b);
    break;
    case'-':
      printf("substraction=&d\n,a-b");
        break;
        case'*':
        printf("multiplication=%d\n",a*b);
        break;
        case'/':
        if (b!=0)
        printf("division=%d\n",a/b);
        break;
    else
        printf("division by zero is not possible.\n");
        break;
        case'%':
            if(b!=0)
            printf("modulus =%d\n,a%b");
            else
            printf("modulus by zero is not possible.\n");
            break;
            default :
            print("invalid operator:\n");
    }
       return 0;
    }
