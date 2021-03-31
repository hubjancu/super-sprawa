#include <stdio.h>


int  main()
{

float a,b;
char znak;

printf("SUPER PROGRAM WLASNIE DLA CIEBIE ! NIE ZMARNUJ TEJ SZANSY ");

printf("Wprowadz rownanie np a + b ");
scanf("%f %c %f", &a, &znak, &b);

switch(znak)
{
        case '+':
        printf("\n%.2f + %.1f = %.2f ", a , b , a+b);
        break;
        case '-':
        printf("\n%.2f - %.3f = %.2f ", a , b , a-b);
        break;
        case '*':
        printf("\n%.2f * %.1f = %.2f ", a , b , a*b);
        break;
        case '/':
        printf("\n%.2f / %.2f = %.2f\n ", a , b , a/b);
        break;
        case '%':
        printf("\n modulo = %d", (int)a%(int)b);
        break;


        default :
        printf("zle wprowadzone rownanie");
        break;
}
return 0;
}

