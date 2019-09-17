#include <stdio.h>
#include <math.h>
//MARY NJERI NYORO

int isPerfectSquare(int a)
{
    int root;
    root = sqrt(a);

    if (a == root * root)
        return 1;
    else
        return 0;
}


int main()
{

    int x = floorf(x);
    int  original;
    int num;
    int abovex = 0;
    int belowx = 0;

    printf("Enter a number\n");
    scanf("%d", & x);
    original = x;
    num = isPerfectSquare(x);

    if (num == 1)
    {
        printf("%dThat number is a perfect square\n", x);
    }


    while (num == 0)
    {
        abovex ++;
        x += abovex;
        num = isPerfectSquare(x);

        if (num == 1)
        {
            printf("%d is the closest number to a perfect square", x);
        }


        x = original;


        belowx --;
        x -= belowx;
        num = isPerfectSquare(x);

        if (num == 1)
        {
            printf("%d is the closest number to a perfect square ", x);
        }

        x = original;

    }

    return 0;
}

