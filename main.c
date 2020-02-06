#include <stdio.h>
#include <stdlib.h>

double calc();
char op;

int main()
{
    double x;
    double y;


    printf("x: ");
    scanf("%lf", &x);

    printf("Operator: ");
    scanf(" %c", &op);

    printf("y: ");
    scanf("%lf", &y);

    calc(x, y);
}

double calc(double x, double y)
{

    if (op == '+')
    {
        printf("%f", x + y);
    }
    else if (op == '-')
    {
        printf("%f", x - y);
    }
    else if (op == '*')
    {
        printf("%f", x * y);
    }
    else if (op == '/')
    {
        printf("%f", x / y);
    }
    else
    {
        printf("Invalid Operator!");
    }

}


