#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=8,b=3,c=-5,resultado=0;
    resultado=a*(c%b);//(a*c)%b;//a*(b/c);//a*b/c;//a%c;//a/c;//a%b;//a/b; //2*b+3*(a-c);  //a+b+c;
    printf("el Resultado es : %d", resultado);
    return 0;
}
